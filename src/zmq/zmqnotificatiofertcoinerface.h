// Copyright (c) 2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_ZMQ_ZMQNOTIFICATIOfertcoinERFACE_H
#define BITCOIN_ZMQ_ZMQNOTIFICATIOfertcoinERFACE_H

#include "validationinterface.h"
#include <string>
#include <map>

class CBlockIndex;
class CZMQAbstractNotifier;

class CZMQNotificatiofertcoinerface : public Cvalidationinterface
{
public:
    virtual ~CZMQNotificatiofertcoinerface();

    static CZMQNotificatiofertcoinerface* CreateWithArguments(const std::map<std::string, std::string> &args);

protected:
    bool Initialize();
    void Shutdown();

    // Cvalidationinterface
    void SyncTransaction(const CTransaction &tx, const CBlock *pblock);
    void UpdatedBlockTip(const CBlockIndex *pindex);
    void NotifyTransactionLock(const CTransaction &tx);

private:
    CZMQNotificatiofertcoinerface();

    void *pcontext;
    std::list<CZMQAbstractNotifier*> notifiers;
};

#endif // BITCOIN_ZMQ_ZMQNOTIFICATIOfertcoinERFACE_H
