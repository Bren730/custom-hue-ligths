/****************************************************************************
 *
 *                 THIS IS A GENERATED FILE. DO NOT EDIT!
 *
 * MODULE:         ZPS
 *
 * COMPONENT:      zps_gen.h
 *
 * DATE:           Fri Dec  6 10:53:01 2019
 *
 * AUTHOR:         Jennic Zigbee Protocol Stack Configuration Tool
 *
 * DESCRIPTION:    ZPS definitions
 *
 ****************************************************************************
 *
 * This software is owned by NXP B.V. and/or its supplier and is protected
 * under applicable copyright laws. All rights are reserved. We grant You,
 * and any third parties, a license to use this software solely and
 * exclusively on NXP products [NXP Microcontrollers such as JN5168, JN5179].
 * You, and any third parties must reproduce the copyright and warranty notice
 * and any other legend of ownership on each copy or partial copy of the
 * software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright NXP B.V. 2017. All rights reserved
 ****************************************************************************/

#ifndef _ZPS_GEN_H
#define _ZPS_GEN_H

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

#define ZPS_NWK_OPT_ALL
#define ZPS_NODE_LIGHT_COLORTEMPERATURELIGHT

/* Profile 'ZDP' */
#define ZDP_PROFILE_ID    (0x0000)
#define ZDP_NWK_ADDR_REQ_CLUSTER_ID    (0x0000)
#define ZDP_IEEE_ADDR_REQ_CLUSTER_ID    (0x0001)
#define ZDP_NODE_DESC_REQ_CLUSTER_ID    (0x0002)
#define ZDP_POWER_DESC_REQ_CLUSTER_ID    (0x0003)
#define ZDP_SIMPLE_DESC_REQ_CLUSTER_ID    (0x0004)
#define ZDP_ACTIVE_EP_REQ_CLUSTER_ID    (0x0005)
#define ZDP_MATCH_DESC_REQ_CLUSTER_ID    (0x0006)
#define ZDP_COMPLEX_DESC_REQ_CLUSTER_ID    (0x0010)
#define ZDP_USER_DESC_REQ_CLUSTER_ID    (0x0011)
#define ZDP_DISCOVERY_CACHE_REQ_CLUSTER_ID    (0x0012)
#define ZDP_DEVICE_ANNCE_CLUSTER_ID    (0x0013)
#define ZDP_USER_DESC_SET_CLUSTER_ID    (0x0014)
#define ZDP_SYSTEM_SERVER_DISCOVERY_REQ_CLUSTER_ID    (0x0015)
#define ZDP_DISCOVERY_STORE_REQ_CLUSTER_ID    (0x0016)
#define ZDP_NODE_DESC_STORE_REQ_CLUSTER_ID    (0x0017)
#define ZDP_POWER_DESC_STORE_REQ_CLUSTER_ID    (0x0018)
#define ZDP_ACTIVE_EP_STORE_REQ_CLUSTER_ID    (0x0019)
#define ZDP_SIMPLE_DESC_STORE_REQ_CLUSTER_ID    (0x001a)
#define ZDP_REMOVE_NODE_CACHE_REQ_CLUSTER_ID    (0x001b)
#define ZDP_FIND_NODE_CHACHE_REQ_CLUSTER_ID    (0x001c)
#define ZDP_EXTENDED_SIMPLE_DESC_REQ_CLUSTER_ID    (0x001d)
#define ZDP_EXTENDED_ACTIVE_EP_REQ_CLUSTER_ID    (0x001e)
#define ZDP_END_DEVICE_BIND_REQ_CLUSTER_ID    (0x0020)
#define ZDP_BIND_REQ_CLUSTER_ID    (0x0021)
#define ZDP_UNBIND_REQ_CLUSTER_ID    (0x0022)
#define ZDP_BIND_REGISTER_REQ_CLUSTER_ID    (0x0023)
#define ZDP_REPLACE_DEVICE_REQ_CLUSTER_ID    (0x0024)
#define ZDP_STORE_BKUP_BIND_ENTRY_REQ_CLUSTER_ID    (0x0025)
#define ZDP_REMOVE_BKUP_BIND_ENTRY_REQ_CLUSTER_ID    (0x0026)
#define ZDP_BACKUP_BIND_TABLE_REQ_CLUSTER_ID    (0x0027)
#define ZDP_RECOVER_BIND_TABLE_REQ_CLUSTER_ID    (0x0028)
#define ZDP_BACKUP_SOURCE_BIND_REQ_CLUSTER_ID    (0x0029)
#define ZDP_RECOVER_SOURCE_BIND_REQ_CLUSTER_ID    (0x002a)
#define ZDP_MGMT_NWK_DISC_REQ_CLUSTER_ID    (0x0030)
#define ZDP_MGMT_LQI_REQ_CLUSTER_ID    (0x0031)
#define ZDP_MGMT_RTG_REQ_CLUSTER_ID    (0x0032)
#define ZDP_MGMT_BIND_REQ_CLUSTER_ID    (0x0033)
#define ZDP_MGMT_LEAVE_REQ_CLUSTER_ID    (0x0034)
#define ZDP_MGMT_DIRECT_JOIN_REQ_CLUSTER_ID    (0x0035)
#define ZDP_MGMT_PERMIT_JOINING_REQ_CLUSTER_ID    (0x0036)
#define ZDP_MGMT_CACHE_REQ_CLUSTER_ID    (0x0037)
#define ZDP_MGMT_NWK_UPDATE_REQ_CLUSTER_ID    (0x0038)
#define ZDP_NWK_ADDR_RSP_CLUSTER_ID    (0x8000)
#define ZDP_IEEE_ADDR_RSP_CLUSTER_ID    (0x8001)
#define ZDP_NODE_DESC_RSP_CLUSTER_ID    (0x8002)
#define ZDP_POWER_DESC_RSP_CLUSTER_ID    (0x8003)
#define ZDP_SIMPLE_DESC_RSP_CLUSTER_ID    (0x8004)
#define ZDP_ACTIVE_EP_RSP_CLUSTER_ID    (0x8005)
#define ZDP_MATCH_DESC_RSP_CLUSTER_ID    (0x8006)
#define ZDP_COMPLEX_DESC_RSP_CLUSTER_ID    (0x8010)
#define ZDP_USER_DESC_RSP_CLUSTER_ID    (0x8011)
#define ZDP_DISCOVERY_CACHE_RSP_CLUSTER_ID    (0x8012)
#define ZDP_USER_DESC_CONF_CLUSTER_ID    (0x8014)
#define ZDP_SYSTEM_SERVER_DISCOVERY_RSP_CLUSTER_ID    (0x8015)
#define ZDP_DISCOVERY_STORE_RSP_CLUSTER_ID    (0x8016)
#define ZDP_NODE_DESC_STORE_RSP_CLUSTER_ID    (0x8017)
#define ZDP_POWER_DESC_STORE_RSP_CLUSTER_ID    (0x8018)
#define ZDP_ACTIVE_EP_STORE_RSP_CLUSTER_ID    (0x8019)
#define ZDP_SIMPLE_DESC_STORE_RSP_CLUSTER_ID    (0x801a)
#define ZDP_REMOVE_NODE_CACHE_RSP_CLUSTER_ID    (0x801b)
#define ZDP_FIND_NODE_CHACHE_RSP_CLUSTER_ID    (0x801c)
#define ZDP_EXTENDED_SIMPLE_DESC_RSP_CLUSTER_ID    (0x801d)
#define ZDP_EXTENDED_ACTIVE_EP_RSP_CLUSTER_ID    (0x801e)
#define ZDP_END_DEVICE_BIND_RSP_CLUSTER_ID    (0x8020)
#define ZDP_BIND_RSP_CLUSTER_ID    (0x8021)
#define ZDP_UNBIND_RSP_CLUSTER_ID    (0x8022)
#define ZDP_BIND_REGISTER_RSP_CLUSTER_ID    (0x8023)
#define ZDP_REPLACE_DEVICE_RSP_CLUSTER_ID    (0x8024)
#define ZDP_STORE_BKUP_BIND_ENTRY_RSP_CLUSTER_ID    (0x8025)
#define ZDP_REMOVE_BKUP_BIND_ENTRY_RSP_CLUSTER_ID    (0x8026)
#define ZDP_BACKUP_BIND_TABLE_RSP_CLUSTER_ID    (0x8027)
#define ZDP_RECOVER_BIND_TABLE_RSP_CLUSTER_ID    (0x8028)
#define ZDP_BACKUP_SOURCE_BIND_RSP_CLUSTER_ID    (0x8029)
#define ZDP_RECOVER_SOURCE_BIND_RSP_CLUSTER_ID    (0x802a)
#define ZDP_MGMT_NWK_DISC_RSP_CLUSTER_ID    (0x8030)
#define ZDP_MGMT_LQI_RSP_CLUSTER_ID    (0x8031)
#define ZDP_MGMT_RTG_RSP_CLUSTER_ID    (0x8032)
#define ZDP_MGMT_BIND_RSP_CLUSTER_ID    (0x8033)
#define ZDP_MGMT_LEAVE_RSP_CLUSTER_ID    (0x8034)
#define ZDP_MGMT_DIRECT_JOIN_RSP_CLUSTER_ID    (0x8035)
#define ZDP_MGMT_PERMIT_JOINING_RSP_CLUSTER_ID    (0x8036)
#define ZDP_MGMT_CACHE_RSP_CLUSTER_ID    (0x8037)
#define ZDP_MGMT_NWK_UPDATE_RSP_CLUSTER_ID    (0x8038)

/* Profile 'Light_Link' */
#define LIGHT_LINK_PROFILE_ID    (0xc05e)
#define LIGHT_LINK_BASIC_CLUSTER_ID    (0x0000)
#define LIGHT_LINK_IDENTIFY_CLUSTER_ID    (0x0003)
#define LIGHT_LINK_GROUPS_CLUSTER_ID    (0x0004)
#define LIGHT_LINK_SCENES_CLUSTER_ID    (0x0005)
#define LIGHT_LINK_ONOFF_CLUSTER_ID    (0x0006)
#define LIGHT_LINK_LEVELCONTROL_CLUSTER_ID    (0x0008)
#define LIGHT_LINK_COLOURCONTROL_CLUSTER_ID    (0x0300)
#define LIGHT_LINK_OTA_CLUSTER_ID    (0x0019)
#define LIGHT_LINK_TIME_CLUSTER_ID    (0x000a)
#define LIGHT_LINK_DEFAULT_CLUSTER_ID    (0xffff)
#define LIGHT_LINK_COMMISSION_CLUSTER_ID    (0x1000)

/* Profile 'HA' */
#define HA_PROFILE_ID    (0x0104)
#define HA_TIME_CLUSTER_ID    (0x000a)
#define HA_OTA_CLUSTER_ID    (0x0019)
#define HA_DEFAULT_CLUSTER_ID    (0xffff)

/* Node 'Coordinator' */
/* Endpoints */
#define COORDINATOR_ZDO_ENDPOINT    (0)

/* Node 'Light_ExtendedColorLight' */

/* Endpoints */
#define LIGHT_EXTENDEDCOLORLIGHT_ZDO_ENDPOINT    (0)
#define LIGHT_EXTENDEDCOLORLIGHT_LIGHT_ENDPOINT    (1)
#define LIGHT_EXTENDEDCOLORLIGHT_COMMISSION_ENDPOINT    (2)

/* Node 'Light_DimmableLight' */

/* Endpoints */
#define LIGHT_DIMMABLELIGHT_ZDO_ENDPOINT    (0)
#define LIGHT_DIMMABLELIGHT_LIGHT_ENDPOINT    (1)
#define LIGHT_DIMMABLELIGHT_COMMISSION_ENDPOINT    (2)

/* Node 'Light_DimmablePlug' */

/* Endpoints */
#define LIGHT_DIMMABLEPLUG_ZDO_ENDPOINT    (0)
#define LIGHT_DIMMABLEPLUG_PLUG_ENDPOINT    (1)
#define LIGHT_DIMMABLEPLUG_COMMISSION_ENDPOINT    (2)

/* Node 'Light_ColorTemperatureLight' */

/* Endpoints */
#define LIGHT_COLORTEMPERATURELIGHT_ZDO_ENDPOINT    (0)
#define LIGHT_COLORTEMPERATURELIGHT_LIGHT_ENDPOINT    (1)
#define LIGHT_COLORTEMPERATURELIGHT_COMMISSION_ENDPOINT    (2)

/* Node 'Light_OnOffLight' */

/* Endpoints */
#define LIGHT_ONOFFLIGHT_ZDO_ENDPOINT    (0)
#define LIGHT_ONOFFLIGHT_LIGHT_ENDPOINT    (1)
#define LIGHT_ONOFFLIGHT_COMMISSION_ENDPOINT    (2)

/* Node 'Light_OnOffPlug' */

/* Endpoints */
#define LIGHT_ONOFFPLUG_ZDO_ENDPOINT    (0)
#define LIGHT_ONOFFPLUG_PLUG_ENDPOINT    (1)
#define LIGHT_ONOFFPLUG_COMMISSION_ENDPOINT    (2)

/* Node 'Light_ColorLight' */

/* Endpoints */
#define LIGHT_COLORLIGHT_ZDO_ENDPOINT    (0)
#define LIGHT_COLORLIGHT_LIGHT_ENDPOINT    (1)
#define LIGHT_COLORLIGHT_COMMISSION_ENDPOINT    (2)

/* Node 'OTAServer' */

/* Endpoints */
#define OTASERVER_ZDO_ENDPOINT    (0)
#define OTASERVER_OTASERVEREP_ENDPOINT    (2)

/* Node 'Controller_ColorSceneController' */

/* Endpoints */
#define CONTROLLER_COLORSCENECONTROLLER_ZDO_ENDPOINT    (0)
#define CONTROLLER_COLORSCENECONTROLLER_REMOTE_ENDPOINT    (1)
#define CONTROLLER_COLORSCENECONTROLLER_COMMISSION_ENDPOINT    (2)

/* Node 'Controller_ColorController' */

/* Endpoints */
#define CONTROLLER_COLORCONTROLLER_ZDO_ENDPOINT    (0)
#define CONTROLLER_COLORCONTROLLER_REMOTE_ENDPOINT    (1)
#define CONTROLLER_COLORCONTROLLER_COMMISSION_ENDPOINT    (2)

/* Node 'Controller_NonColorController' */

/* Endpoints */
#define CONTROLLER_NONCOLORCONTROLLER_ZDO_ENDPOINT    (0)
#define CONTROLLER_NONCOLORCONTROLLER_REMOTE_ENDPOINT    (1)
#define CONTROLLER_NONCOLORCONTROLLER_COMMISSION_ENDPOINT    (2)

/* Node 'Controller_NonColorSceneController' */

/* Endpoints */
#define CONTROLLER_NONCOLORSCENECONTROLLER_ZDO_ENDPOINT    (0)
#define CONTROLLER_NONCOLORSCENECONTROLLER_REMOTE_ENDPOINT    (1)
#define CONTROLLER_NONCOLORSCENECONTROLLER_COMMISSION_ENDPOINT    (2)

/* Node 'Controller_OnOffSensor' */

/* Endpoints */
#define CONTROLLER_ONOFFSENSOR_ZDO_ENDPOINT    (0)
#define CONTROLLER_ONOFFSENSOR_REMOTE_ENDPOINT    (1)
#define CONTROLLER_ONOFFSENSOR_COMMISSION_ENDPOINT    (2)

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        External Variables                                            ***/
/****************************************************************************/

extern void *g_pvApl;

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
PUBLIC void ZPS_vDefaultKeyInit(void);
PUBLIC void* ZPS_vGetGpContext(void);
/****************************************************************************/
/****************************************************************************/
/****************************************************************************/

#endif
