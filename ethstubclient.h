/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _ETHSTUBCLIENT_H_
#define _ETHSTUBCLIENT_H_

#include <jsonrpc/rpc.h>

class EthStubClient
{
    public:
        EthStubClient(jsonrpc::AbstractClientConnector* conn)
        {
            this->client = new jsonrpc::Client(conn);
        }
        ~EthStubClient()
        {
            delete this->client;
        }

        std::string balanceAt(const std::string& a, const int& block) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["a"] = a; 
p["block"] = block; 

            Json::Value result = this->client->CallMethod("balanceAt",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value block(const std::string& numberOrHash) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["numberOrHash"] = numberOrHash; 

            Json::Value result = this->client->CallMethod("block",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string call(const Json::Value& json) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["json"] = json; 

            Json::Value result = this->client->CallMethod("call",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string codeAt(const std::string& a, const int& block) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["a"] = a; 
p["block"] = block; 

            Json::Value result = this->client->CallMethod("codeAt",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string coinbase() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("coinbase",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        double countAt(const std::string& a, const int& block) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["a"] = a; 
p["block"] = block; 

            Json::Value result = this->client->CallMethod("countAt",p);
    if (result.isDouble())
        return result.asDouble();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        int defaultBlock() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("defaultBlock",p);
    if (result.isInt())
        return result.asInt();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string fromAscii(const int& padding, const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["padding"] = padding; 
p["s"] = s; 

            Json::Value result = this->client->CallMethod("fromAscii",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        double fromFixed(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("fromFixed",p);
    if (result.isDouble())
        return result.asDouble();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string gasPrice() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("gasPrice",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        bool isListening() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("isListening",p);
    if (result.isBool())
        return result.asBool();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        bool isMining() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("isMining",p);
    if (result.isBool())
        return result.asBool();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string key() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("key",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value keys() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("keys",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string lll(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("lll",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value messages(const Json::Value& json) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["json"] = json; 

            Json::Value result = this->client->CallMethod("messages",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        int number() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("number",p);
    if (result.isInt())
        return result.asInt();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        int peerCount() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->client->CallMethod("peerCount",p);
    if (result.isInt())
        return result.asInt();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string secretToAddress(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("secretToAddress",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value setListening(const bool& l) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["l"] = l; 

            Json::Value result = this->client->CallMethod("setListening",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value setMining(const bool& l) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["l"] = l; 

            Json::Value result = this->client->CallMethod("setMining",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string sha3(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("sha3",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string stateAt(const std::string& a, const int& block, const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["a"] = a; 
p["block"] = block; 
p["s"] = s; 

            Json::Value result = this->client->CallMethod("stateAt",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string toAscii(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("toAscii",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string toDecimal(const std::string& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("toDecimal",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string toFixed(const double& s) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["s"] = s; 

            Json::Value result = this->client->CallMethod("toFixed",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string transact(const Json::Value& json) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["json"] = json; 

            Json::Value result = this->client->CallMethod("transact",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value transaction(const int& i, const std::string& numberOrHash) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["i"] = i; 
p["numberOrHash"] = numberOrHash; 

            Json::Value result = this->client->CallMethod("transaction",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        Json::Value uncle(const int& i, const std::string& numberOrHash) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["i"] = i; 
p["numberOrHash"] = numberOrHash; 

            Json::Value result = this->client->CallMethod("uncle",p);
    if (result.isArray())
        return result;
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

        std::string watch(const std::string& json) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["json"] = json; 

            Json::Value result = this->client->CallMethod("watch",p);
    if (result.isString())
        return result.asString();
     else 
         throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());

        }

    private:
        jsonrpc::Client* client;
};
#endif //_ETHSTUBCLIENT_H_
