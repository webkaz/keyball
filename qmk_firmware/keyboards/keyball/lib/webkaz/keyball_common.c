
#include QMK_KEYBOARD_H
#include "quantum.h"

//#include "lib/keyball/keyball.h"
#include "keyball_common.h"

// 本家で実装されたのでauto mouse layerはコメントアウトする。今後独自実装の共通function実装するためにこのファイルは残す

// layer_state_t auto_mouse_layer_state(layer_state_t state){

// //POINTING_DEVICE_AUTO_MOUSE_ENABLEが有効の時は以下有効となる
// #ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
//     //レイヤー３のみAuto mouse layerを無効にする
//     switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
//         case SCROLL_LAYER:
//             // Auto enable scroll mode when the highest layer is 3
//             // remove_auto_mouse_target must be called to adjust state *before* setting enable
//             state = remove_auto_mouse_layer(state, false);
//             set_auto_mouse_enable(false);
//             keyball_set_scroll_mode(true);
//             break;
//         default:
//             set_auto_mouse_enable(true);
//             keyball_set_scroll_mode(false);
//             break;
//     }
// #else
//     // Auto enable scroll mode when the highest layer is 3
//     keyball_set_scroll_mode(get_highest_layer(state) == SCROLL_LAYER);
// #endif

//     return state;
// }
