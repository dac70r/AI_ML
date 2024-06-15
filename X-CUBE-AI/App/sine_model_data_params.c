/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Jun 14 10:58:03 2024
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

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0x3e6479ebbda5a718U, 0x3edf675f3f14aa4eU, 0x3ebab63d3e3cb823U, 0xbed05376bf151be6U,
  0x3e91b5c5bed08ab1U, 0xbf0e73b8bdd5eb50U, 0x3e6e8d68be54488cU, 0x3eec59a13e8c550aU,
  0xbf1d27a800000000U, 0x3e2c91a9bf014d4eU, 0xbedb44f43e92d649U, 0x0U,
  0xbeabfe2a00000000U, 0x0U, 0x3e140e4600000000U, 0x3e32cd42bf08ecddU,
  0xbe4913e5bc654600U, 0x3d8081ee3efb2675U, 0x3ed213773e8ed93aU, 0x3e3b94c2bdd8491cU,
  0x3ef29698be874217U, 0xbc4ff3e03e8262ebU, 0xbe090b34be33dcd0U, 0xbe0dfdacbe82ee43U,
  0xbf1835233c795060U, 0x3c82161fbe93ba5dU, 0xbf2165833d938b41U, 0xbe82fe853ec0bd7dU,
  0x3e9583f43d85a048U, 0xbcd1ebb0bece5475U, 0x3ec6c9e53c247800U, 0x3eda1b65bf338c69U,
  0xbebccd88bd92c760U, 0xbe11a503bf2faccaU, 0xbebea9143c3738a7U, 0x3e559e723d79a648U,
  0xbefb1dd9be230a56U, 0xbeafee42bd1a74e0U, 0x3e4c2e8b3b06c480U, 0xbcde000ebf188a86U,
  0x3f0433933e6f54b2U, 0xbd1aa9473e961103U, 0x3e81c48bbee6826eU, 0x3e043a16be84ad18U,
  0x3e2387c93cb42520U, 0xbc8ed0c0be9c55ceU, 0x3e1eae993ce1bd40U, 0xbee2765b3efc34ebU,
  0xbec2ba8f3d4e3938U, 0xbe916781beb8d2b0U, 0x3ebf077fbe8ce1a0U, 0x3db927bcbed7dc48U,
  0x3d1969d0bde7b030U, 0x3d36f0283d35b190U, 0xbebcc3f93ed9854fU, 0x3e9cc529be0b9890U,
  0x3ebf5fe7bdcff0b0U, 0xbee5a4043ea46954U, 0xbd8af2adbdcb1547U, 0xbd30f8803d5dd548U,
  0x3ee1c13d3dcb654cU, 0x3dad8524be578133U, 0x3ea452d83d9f811cU, 0xbdfe0138bb3f4248U,
  0x3e9f26583e304a8eU, 0xbe2da1153e840804U, 0xbe2756103d4091a0U, 0xbeb3eff93ec0978bU,
  0xbe832dd83db5779cU, 0xbc91d7e0beb47272U, 0xbe9d292dbeaf676aU, 0x3d8c94f83dcc9fadU,
  0xbe1ba096be394db4U, 0x3e85bb813e240f27U, 0xbd9696d3be8b54ccU, 0xbdaddb6cbe34430eU,
  0x3ef037babe864a57U, 0x3def05f4be9b30e3U, 0x3de16078bebcc04eU, 0x3e511df63e819a73U,
  0xbe49822d3de2e05cU, 0x3eb07470be19e416U, 0x3dbfa473be864f01U, 0xbe9bfc2cbcddb6e0U,
  0x3bc63fb3beb8f54aU, 0x3d114568bdb75500U, 0xbdb78744bebbb1f8U, 0xbeb1eff8bea83981U,
  0x3f165e38beb608bfU, 0xbde8f2a1bd730525U, 0x3dc035dabc3507f2U, 0x3b8acc403de42634U,
  0x3ed93786be1451d4U, 0xbed1658dbe0e3832U, 0xbef29593be32c090U, 0x3dc3feb73eeb2787U,
  0xbea5ef0cbeb448c1U, 0xbec45b863eb468e1U, 0x3debe90cbe5ca4bfU, 0x3e7b9ea63e9fdc45U,
  0x3e82f81fbe7b3ed0U, 0xbeb60b7e3d1c9628U, 0x3ca828a03ea83047U, 0xbeaa0754bd8736fcU,
  0xbe9a5686bea1960eU, 0xbec2e5f53e0cf775U, 0x3df2a00ebeea5d92U, 0xbe11333ebe523855U,
  0xbed1cac1bdc699c0U, 0xbdeb67d8bed790b2U, 0x3e7dc03dbeda80c5U, 0x3ec87823bd9c7a12U,
  0xbf3cde483aa21c00U, 0x3e8f5a77bedddcfeU, 0xbe442bc43ea370baU, 0x3e9b3c7fbea6db86U,
  0x3c9c5b7c3c0e8fa0U, 0xbe23e7e03e224126U, 0xbda72c07be44f838U, 0x3e946208bd4afd2eU,
  0x3ec7dae3bed93d4fU, 0xbe21dabebc83a180U, 0x3ea0c3dfbed10449U, 0x3edd9f4f3eb11d49U,
  0xbebcb0613ec8a887U, 0xbe2c9ff43e8f7a47U, 0xbecfbf0abdfc52d4U, 0xbe3959263ead0b9fU,
  0xbf5e3b2d3e1c91a2U, 0x3e2ed1babe7bcd64U, 0x3dc64f82bd89cd35U, 0xbeab2ac6be908a2eU,
  0xbef2dc553e8e459bU, 0x3c16d1203d279818U, 0x3eabc660bea0859fU, 0x3e8e0127bf109799U,
  0xbf45b80b3ecb5ef5U, 0x3df01881bea6f36cU, 0xbe27396d3eba06ccU, 0xbece0ca9be457b88U,
  0xbf17f53fbc6f7d00U, 0x3edce079beb357f8U, 0x3ea8b8bf3ec3e53bU, 0x3e87afbabd98d1deU,
  0x3de1e9fbbdd53946U, 0xbecac3d33f012406U, 0xbeba2c6c00000000U, 0xbe3829a9bd1a3d7fU,
  0xbecbb807bc276adaU, 0xbd43953300000000U, 0x3cd651b4U, 0x3bba97ffbd7184f9U,
  0x3f8a7747be883a90U, 0x3fb619dbbf2896d0U, 0x3f9364ee3d31bc60U, 0xbe8ce9b33e834e32U,
  0x3fb2667cbe2fc8d7U, 0x3d9136d9bf086187U, 0x3f02fe2c3ef16f81U, 0x3f0ff1c63f451fe6U,
  0xbe3c10d7U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

