/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGInstanceSummaryResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceSummaryResponse::SWGInstanceSummaryResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceSummaryResponse::SWGInstanceSummaryResponse() {
    init();
}

SWGInstanceSummaryResponse::~SWGInstanceSummaryResponse() {
    this->cleanup();
}

void
SWGInstanceSummaryResponse::init() {
    version = new QString("");
    qt_version = new QString("");
    logging = new SWGLoggingInfo();
    devicesetlist = new SWGDeviceSetList();
}

void
SWGInstanceSummaryResponse::cleanup() {
    
    if(version != nullptr) {
        delete version;
    }

    if(qt_version != nullptr) {
        delete qt_version;
    }

    if(logging != nullptr) {
        delete logging;
    }

    if(devicesetlist != nullptr) {
        delete devicesetlist;
    }
}

SWGInstanceSummaryResponse*
SWGInstanceSummaryResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceSummaryResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&version, pJson["version"], "QString", "QString");
    ::SWGSDRangel::setValue(&qt_version, pJson["qtVersion"], "QString", "QString");
    ::SWGSDRangel::setValue(&logging, pJson["logging"], "SWGLoggingInfo", "SWGLoggingInfo");
    ::SWGSDRangel::setValue(&devicesetlist, pJson["devicesetlist"], "SWGDeviceSetList", "SWGDeviceSetList");
}

QString
SWGInstanceSummaryResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInstanceSummaryResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("version"), version, obj, QString("QString"));

    toJsonValue(QString("qtVersion"), qt_version, obj, QString("QString"));

    toJsonValue(QString("logging"), logging, obj, QString("SWGLoggingInfo"));

    toJsonValue(QString("devicesetlist"), devicesetlist, obj, QString("SWGDeviceSetList"));

    return obj;
}

QString*
SWGInstanceSummaryResponse::getVersion() {
    return version;
}
void
SWGInstanceSummaryResponse::setVersion(QString* version) {
    this->version = version;
}

QString*
SWGInstanceSummaryResponse::getQtVersion() {
    return qt_version;
}
void
SWGInstanceSummaryResponse::setQtVersion(QString* qt_version) {
    this->qt_version = qt_version;
}

SWGLoggingInfo*
SWGInstanceSummaryResponse::getLogging() {
    return logging;
}
void
SWGInstanceSummaryResponse::setLogging(SWGLoggingInfo* logging) {
    this->logging = logging;
}

SWGDeviceSetList*
SWGInstanceSummaryResponse::getDevicesetlist() {
    return devicesetlist;
}
void
SWGInstanceSummaryResponse::setDevicesetlist(SWGDeviceSetList* devicesetlist) {
    this->devicesetlist = devicesetlist;
}


}

