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

/*
 * SWGAudioDevices.h
 * 
 * List of audio devices available in the system
 */

#ifndef SWGAudioDevices_H_
#define SWGAudioDevices_H_

#include <QJsonObject>


#include "SWGAudioDevice.h"
#include <QList>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGAudioDevices: public SWGObject {
public:
    SWGAudioDevices();
    SWGAudioDevices(QString* json);
    virtual ~SWGAudioDevices();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAudioDevices* fromJson(QString &jsonString);

    float getInputVolume();
    void setInputVolume(float input_volume);

    qint32 getNbInputDevices();
    void setNbInputDevices(qint32 nb_input_devices);

    qint32 getInputDeviceSelectedIndex();
    void setInputDeviceSelectedIndex(qint32 input_device_selected_index);

    QList<SWGAudioDevice*>* getInputDevices();
    void setInputDevices(QList<SWGAudioDevice*>* input_devices);

    qint32 getNbOutputDevices();
    void setNbOutputDevices(qint32 nb_output_devices);

    qint32 getOutputDeviceSelectedIndex();
    void setOutputDeviceSelectedIndex(qint32 output_device_selected_index);

    QList<SWGAudioDevice*>* getOutputDevices();
    void setOutputDevices(QList<SWGAudioDevice*>* output_devices);


private:
    float input_volume;
    qint32 nb_input_devices;
    qint32 input_device_selected_index;
    QList<SWGAudioDevice*>* input_devices;
    qint32 nb_output_devices;
    qint32 output_device_selected_index;
    QList<SWGAudioDevice*>* output_devices;
};

}

#endif /* SWGAudioDevices_H_ */
