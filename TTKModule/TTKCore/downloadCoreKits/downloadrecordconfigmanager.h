#ifndef DOWNLOADRECORDCONFIGMANAGER_H
#define DOWNLOADRECORDCONFIGMANAGER_H

/* =================================================
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "downloadabstractxml.h"

/*! @brief The class of the local download record item.
 * @author Greedysky <greedysky@163.com>
 */
typedef struct DOWNLOAD_CORE_EXPORT DownloadRecord
{
    QString m_time;
    QString m_path;
    QString m_size;
    QString m_url;
}DownloadRecord;
TTK_DECLARE_LISTS(DownloadRecord)

/*! @brief The class of the download record manager.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_CORE_EXPORT DownloadRecordConfigManager : public DownloadAbstractXml
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadRecordConfigManager(QObject *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Read history download datas from xml file by given name.
     */
    inline bool readDownloadXMLConfig() { return readConfig(HISTORYPATH_FULL); }

    /*!
     * Write history download datas into xml file.
     */
    void writeDownloadConfig(const DownloadRecords &records);
    /*!
     * Read history download datas into xml file.
     */
    void readDownloadConfig(DownloadRecords &records);

};

#endif // DOWNLOADRECORDCONFIGMANAGER_H
