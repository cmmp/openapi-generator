/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIApiResponse.h
 *
 * Describes the result of uploading an image resource
 */

#ifndef OAIApiResponse_H_
#define OAIApiResponse_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIApiResponse: public OAIObject {
public:
    OAIApiResponse();
    OAIApiResponse(QString json);
    ~OAIApiResponse() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCode();
    void setCode(const qint32 &code);

    QString getType();
    void setType(const QString &type);

    QString getMessage();
    void setMessage(const QString &message);

    virtual bool isSet() const override;

private:
    qint32 code;
    bool m_code_isSet;

    QString type;
    bool m_type_isSet;

    QString message;
    bool m_message_isSet;

};

}

#endif /* OAIApiResponse_H_ */
