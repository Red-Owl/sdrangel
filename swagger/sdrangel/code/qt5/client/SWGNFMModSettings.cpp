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


#include "SWGNFMModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGNFMModSettings::SWGNFMModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNFMModSettings::SWGNFMModSettings() {
    init();
}

SWGNFMModSettings::~SWGNFMModSettings() {
    this->cleanup();
}

void
SWGNFMModSettings::init() {
    baseband_sample_rate = 0;
    output_sample_rate = 0;
    input_frequency_offset = 0L;
    rf_bandwidth = 0.0f;
    af_bandwidth = 0.0f;
    fm_deviation = 0.0f;
    tone_frequency = 0.0f;
    volume_factor = 0.0f;
    audio_sample_rate = 0;
    channel_mute = 0;
    play_loop = 0;
    ctcss_on = 0;
    ctcss_index = 0;
    rgb_color = 0;
    title = new QString("");
    mod_af_input = 0;
    cw_keyer = new SWGCWKeyerSettings();
}

void
SWGNFMModSettings::cleanup() {
    














    if(title != nullptr) {
        delete title;
    }


    if(cw_keyer != nullptr) {
        delete cw_keyer;
    }
}

SWGNFMModSettings*
SWGNFMModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNFMModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&baseband_sample_rate, pJson["basebandSampleRate"], "qint32", "");
    ::SWGSDRangel::setValue(&output_sample_rate, pJson["outputSampleRate"], "qint32", "");
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    ::SWGSDRangel::setValue(&af_bandwidth, pJson["afBandwidth"], "float", "");
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "float", "");
    ::SWGSDRangel::setValue(&tone_frequency, pJson["toneFrequency"], "float", "");
    ::SWGSDRangel::setValue(&volume_factor, pJson["volumeFactor"], "float", "");
    ::SWGSDRangel::setValue(&audio_sample_rate, pJson["audioSampleRate"], "qint32", "");
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    ::SWGSDRangel::setValue(&play_loop, pJson["playLoop"], "qint32", "");
    ::SWGSDRangel::setValue(&ctcss_on, pJson["ctcssOn"], "qint32", "");
    ::SWGSDRangel::setValue(&ctcss_index, pJson["ctcssIndex"], "qint32", "");
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    ::SWGSDRangel::setValue(&mod_af_input, pJson["modAFInput"], "qint32", "");
    ::SWGSDRangel::setValue(&cw_keyer, pJson["cwKeyer"], "SWGCWKeyerSettings", "SWGCWKeyerSettings");
}

QString
SWGNFMModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNFMModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("basebandSampleRate", QJsonValue(baseband_sample_rate));

    obj->insert("outputSampleRate", QJsonValue(output_sample_rate));

    obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));

    obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));

    obj->insert("afBandwidth", QJsonValue(af_bandwidth));

    obj->insert("fmDeviation", QJsonValue(fm_deviation));

    obj->insert("toneFrequency", QJsonValue(tone_frequency));

    obj->insert("volumeFactor", QJsonValue(volume_factor));

    obj->insert("audioSampleRate", QJsonValue(audio_sample_rate));

    obj->insert("channelMute", QJsonValue(channel_mute));

    obj->insert("playLoop", QJsonValue(play_loop));

    obj->insert("ctcssOn", QJsonValue(ctcss_on));

    obj->insert("ctcssIndex", QJsonValue(ctcss_index));

    obj->insert("rgbColor", QJsonValue(rgb_color));

    toJsonValue(QString("title"), title, obj, QString("QString"));

    obj->insert("modAFInput", QJsonValue(mod_af_input));

    toJsonValue(QString("cwKeyer"), cw_keyer, obj, QString("SWGCWKeyerSettings"));

    return obj;
}

qint32
SWGNFMModSettings::getBasebandSampleRate() {
    return baseband_sample_rate;
}
void
SWGNFMModSettings::setBasebandSampleRate(qint32 baseband_sample_rate) {
    this->baseband_sample_rate = baseband_sample_rate;
}

qint32
SWGNFMModSettings::getOutputSampleRate() {
    return output_sample_rate;
}
void
SWGNFMModSettings::setOutputSampleRate(qint32 output_sample_rate) {
    this->output_sample_rate = output_sample_rate;
}

qint64
SWGNFMModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGNFMModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
}

float
SWGNFMModSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGNFMModSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
}

float
SWGNFMModSettings::getAfBandwidth() {
    return af_bandwidth;
}
void
SWGNFMModSettings::setAfBandwidth(float af_bandwidth) {
    this->af_bandwidth = af_bandwidth;
}

float
SWGNFMModSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGNFMModSettings::setFmDeviation(float fm_deviation) {
    this->fm_deviation = fm_deviation;
}

float
SWGNFMModSettings::getToneFrequency() {
    return tone_frequency;
}
void
SWGNFMModSettings::setToneFrequency(float tone_frequency) {
    this->tone_frequency = tone_frequency;
}

float
SWGNFMModSettings::getVolumeFactor() {
    return volume_factor;
}
void
SWGNFMModSettings::setVolumeFactor(float volume_factor) {
    this->volume_factor = volume_factor;
}

qint32
SWGNFMModSettings::getAudioSampleRate() {
    return audio_sample_rate;
}
void
SWGNFMModSettings::setAudioSampleRate(qint32 audio_sample_rate) {
    this->audio_sample_rate = audio_sample_rate;
}

qint32
SWGNFMModSettings::getChannelMute() {
    return channel_mute;
}
void
SWGNFMModSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
}

qint32
SWGNFMModSettings::getPlayLoop() {
    return play_loop;
}
void
SWGNFMModSettings::setPlayLoop(qint32 play_loop) {
    this->play_loop = play_loop;
}

qint32
SWGNFMModSettings::getCtcssOn() {
    return ctcss_on;
}
void
SWGNFMModSettings::setCtcssOn(qint32 ctcss_on) {
    this->ctcss_on = ctcss_on;
}

qint32
SWGNFMModSettings::getCtcssIndex() {
    return ctcss_index;
}
void
SWGNFMModSettings::setCtcssIndex(qint32 ctcss_index) {
    this->ctcss_index = ctcss_index;
}

qint32
SWGNFMModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGNFMModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
}

QString*
SWGNFMModSettings::getTitle() {
    return title;
}
void
SWGNFMModSettings::setTitle(QString* title) {
    this->title = title;
}

qint32
SWGNFMModSettings::getModAfInput() {
    return mod_af_input;
}
void
SWGNFMModSettings::setModAfInput(qint32 mod_af_input) {
    this->mod_af_input = mod_af_input;
}

SWGCWKeyerSettings*
SWGNFMModSettings::getCwKeyer() {
    return cw_keyer;
}
void
SWGNFMModSettings::setCwKeyer(SWGCWKeyerSettings* cw_keyer) {
    this->cw_keyer = cw_keyer;
}


}

