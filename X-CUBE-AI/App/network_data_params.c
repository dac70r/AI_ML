/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Jun 23 23:17:20 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[161] = {
  0x3eb6d07abd9b1630U, 0xbd954f103eca567fU, 0x3eb2a0cfbef8bd32U, 0x3e9adf183ed83db2U,
  0x3eb99c3abe435a26U, 0x3f0e65a03ea6019cU, 0x3f0fb4e53e922664U, 0xbd99dca83d219b04U,
  0x3f07b97d00000000U, 0x3f1c108cU, 0x3dd7f60d00000000U, 0xbd98fb5abd8d6b05U,
  0xbf3fe9b400000000U, 0xbf1372d3beaa146eU, 0xbf26b9fcbe473ac3U, 0x3f909a08U,
  0x3ed71947be315652U, 0xbb1e1200bec142b8U, 0x3eaa5364bed5031aU, 0xbe5c2e4abdc33223U,
  0xbf4a7f883e497e42U, 0xbdcc1affbe298fe4U, 0xbe3c2c4fbe00f566U, 0x3e9fe92b3f2ceecaU,
  0x3e9ca7b63ddf1c8cU, 0xbea1484a3eb7657fU, 0xb9006b81be61ef7bU, 0xbe79f7f03ebd12f2U,
  0xbef8f1533dc2640cU, 0x3e33ffd3beb08598U, 0xbef2f88e3e9dd192U, 0x3ed0f9b13ed364c8U,
  0xbf1eb396beae6f19U, 0x3eb5be17bf06caa2U, 0x3d002878be7d61a0U, 0x3e2a78d2be0ea9a3U,
  0x3d8785513d940f7cU, 0xbea7c53dbdd33c77U, 0xbf3837fd3c58050fU, 0x3e81d9353ebfd2cbU,
  0xbdb374d9be741f5eU, 0xbebd67383e42ee1eU, 0xbe42c6cabebc4dcaU, 0x3dd7890cbc5bbcf8U,
  0xbe3255643ea1a9e7U, 0x3df7216c3e9643a4U, 0xbe9ff7e4be6649e5U, 0x3e132342bde08450U,
  0x3e7c17e73ebf3c47U, 0xbd7ce0e83d1fc78dU, 0xbe684ee4becb80bbU, 0x3ed676693e079977U,
  0xbdf95d3abeba3a7fU, 0x3e92f1ffbe910cfcU, 0x3e8e54643e2f5464U, 0x3e664816bd855987U,
  0xbeba91d4be1af95aU, 0x3e0c9adabdf8018cU, 0x3eabf5a8bec9e713U, 0xbe9689e9bea8b521U,
  0xbe7091bf3e037112U, 0xbf1a58433d195a10U, 0x3e0648e5bed906e4U, 0x3df2321c3eeeafb6U,
  0xbecd55d5bcf9ded0U, 0x3e1b13863dd2c2acU, 0xbecc8d60be96a793U, 0x3eb5e289be99fc61U,
  0xbd8e11a83e91a465U, 0xbe04fbd63e9ab305U, 0xbe5708e03e994777U, 0xbc29cea0beaa7175U,
  0x3e8f25003e11b30aU, 0x3ec0f4fdbbbf6656U, 0xbec6af443e744046U, 0xbeb261243e445213U,
  0xbde76e283d528610U, 0xbdb94a98be40dac1U, 0xbed5f71bbe24faecU, 0x3e84adf7beca19edU,
  0xbed2729bbec9dd74U, 0xbc647460be369a49U, 0x3e9c9dedbd79ac78U, 0x3e40f3ccbd2743a4U,
  0x3c2da473bce6da40U, 0x3ef46f333c3c63c7U, 0x3ed3b4a23de15dc1U, 0x3c40b000be9e676eU,
  0xbd17b7a53ea564fbU, 0xbdd7c9383e47c870U, 0x3eb3822ebe6c6387U, 0x3ea8fa933e56644cU,
  0x3f085efb3e865dbfU, 0x3e6a38603eea4637U, 0x3c37712dbe9b0857U, 0xbb396c80bf2c1838U,
  0xbe8ab82cbe7d8c25U, 0x3e56eeaebe46227cU, 0xbed5c08cbe049baeU, 0xbe236908bcb4b170U,
  0xbc8e7bf0becdef67U, 0xbdedc9183eccfa85U, 0xbd7be7f0be8e334cU, 0xbe144c0a3deb628cU,
  0x3db586e6beb1ae97U, 0xbe5d95ef3f039580U, 0xbe6bcf8e3edc2ed1U, 0xbcff5ca5beacb40bU,
  0xbf1cb23c3e98830dU, 0xbe5dacb23e68ae9dU, 0x3e31e176be91013dU, 0x3eacaec13f52d06bU,
  0xbec577d5be600b13U, 0xbd4e8920bd5d5920U, 0x3e1dbd343ebafd65U, 0xbeb568b4beb2af33U,
  0xbe1ee614bdc058b0U, 0xbe3ede20bac41199U, 0x3e82ba25be39169aU, 0xbea7774abe258796U,
  0x3d198b223dfc310cU, 0x3e608a3e3ee66ad9U, 0x3e6aa0c83d80bfb0U, 0x3ece8889be84f61dU,
  0xbf4055d1beb337a5U, 0xbedc5b513d63a289U, 0xbe654c71bebc027cU, 0xbdde43b43ec27276U,
  0xbe700cda3e664a6eU, 0x3ebd6739bee23090U, 0x3edff4e1be15d4a4U, 0x3ed4b95fbefcbe32U,
  0x3e09c73fbd913ff0U, 0xbdb1ae54be27f966U, 0xbe82546fbedb9716U, 0x3e9b5d3b3f406536U,
  0x3e44d4c43d4ee108U, 0xbdf0d2b83ed1f28bU, 0x3d45c66d3e8b04c5U, 0x3e51ae863c48ed0cU,
  0xbe2e848cbda19fd4U, 0xbf190e81bd3a51eeU, 0xbebbdffabee6bef5U, 0xbe107ed83e512090U,
  0x3ea7e3203ee35534U, 0xbcd824dd3ebeb0baU, 0x3eb3786abea0f3eeU, 0xbb225c1200000000U,
  0xbee064ccbef33713U, 0x3ed7f90a00000000U, 0x3ed0af5dbbffeabeU, 0x3f01660a3ed5778cU,
  0xbf2df3a23f69205bU, 0xbdc9c2a6bf6838d9U, 0xbf67beeb3e9bd01cU, 0xbf1090163de02ad0U,
  0x3e5f98953ee5813eU, 0xbf17321abf020924U, 0x3fa79b553e340763U, 0x3f512583bf3b428eU,
  0xbea9fa16U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

