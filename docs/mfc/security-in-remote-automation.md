---
title: "Security in Remote Automation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["AllowRemoteActivation [MFC]", "Remote Automation [MFC], security", "activating objects [MFC]", "security [MFC]", "Automation objects [MFC], security options", "object activation [MFC]", "security [MFC], Remote Automation"]
ms.assetid: 276b300d-c0b5-4bd8-8bf5-0270994b9cfa
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Security in Remote Automation
Remote Automation supports a basic level of security to allow a server application writer (or, rather, its administrator) to specify how a specific object may be activated remotely. All automation objects on a given system may be globally set to "disallow remote activation" or to "allow remote activation". Additionally, and more often, individual objects may be given such capabilities. Remote Automation uses a key in each object's registry settings, **AllowRemoteActivation**, to determine whether a given server may be activated remotely. If the systemwide settings use this mode, then each object in the registry may be assigned this key, and the individual status of each one may be set to "yes" or "no" as appropriate.  
  
 If the server system is running Windows NT or Windows 2000, then an alternative form of security is allowed. In this case, Remote Automation uses the NT access control list (ACL) to specify which users or group or groups of users may remotely activate a given server.  
  
 Note that the security options apply to the whole object; it is not possible to set attributes of a specific interface, or of individual properties or methods on that object.  
  
 All security options may be set through the Remote Automation Connection (RAC) Manager.  
  
## See Also  
 [Remote Automation](../mfc/remote-automation.md)

