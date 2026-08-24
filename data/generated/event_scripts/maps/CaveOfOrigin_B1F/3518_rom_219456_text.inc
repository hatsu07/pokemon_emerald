	@ data/maps/CaveOfOrigin_B1F/scripts.inc:62 CaveOfOrigin_B1F_Text_WallaceStory
	.globl CaveOfOrigin_B1F_Text_WallaceStory
CaveOfOrigin_B1F_Text_WallaceStory: @ 0x082191C4
	.string "そうか きみが {PLAYER}{KUN}……\nきみの かつやくは きいているよ\pわたしの なまえは ミクリ\nルネの ジムリーダーを していたけれど\lちょっと わけが あってね\pいまは ししょうの アダンさんに\nジムのことは おまかせして いるのさ\p…… …… ……\n…… …… ……\pいま このまちで あばれている\nグラードンと カイオーガは\lちょうこだい ポケモンと いわれている\pけれど ちょうこだい ポケモンは\nあの2ひき だけじゃ なかった……\lどこかに もう1ひき\pそう…… レックウザと よばれる\nちょうこだい ポケモンが いるんだよ\pとおい むかしに\nあの2ひきの たたかいを しずめたのも\lレックウザ だと いわれている\pだが レックウザが どこに いるかは\nわたしにも わからない……{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_WallaceStory) > 0x158
	.error "CaveOfOrigin_B1F_Text_WallaceStory may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_WallaceStory) < 0x158
	.space 0x158 - (. - CaveOfOrigin_B1F_Text_WallaceStory)
	.endif
	@ data/maps/CaveOfOrigin_B1F/scripts.inc:65 CaveOfOrigin_B1F_Text_WhereIsRayquaza
	.globl CaveOfOrigin_B1F_Text_WhereIsRayquaza
CaveOfOrigin_B1F_Text_WhereIsRayquaza: @ 0x0821931C
	.string "ミクリ『{PLAYER}{KUN} ひょっとして\nきみは レックウザが どこに いるか\lしっているのかい?\pよかったら おしえて くれないか……{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_WhereIsRayquaza) > 0x40
	.error "CaveOfOrigin_B1F_Text_WhereIsRayquaza may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_WhereIsRayquaza) < 0x40
	.space 0x40 - (. - CaveOfOrigin_B1F_Text_WhereIsRayquaza)
	.endif
	@ data/maps/CaveOfOrigin_B1F/scripts.inc:68 CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
	.globl CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin: @ 0x0821935C
	.string "ミクリ『めざめのほこらか……\pって それは ここのこと じゃないか\nたのむよ しっかり してくれ!\pレックウザが どこに いるか\nもういちど かんがえて みてくれ……{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin) > 0x54
	.error "CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin) < 0x54
	.space 0x54 - (. - CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin)
	.endif
	@ data/maps/CaveOfOrigin_B1F/scripts.inc:71 CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
	.globl CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat: @ 0x082193B0
	.string "ミクリ『おくりびやまか……\pしかし このまえ オババさまに\nあったときは なにも いってなかった\pあのひとが わたしに\nうそを つくとも おもえないし……\p{PLAYER}{KUN} もういちど\nよく かんがえて くれないか……{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat) > 0x6a
	.error "CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat) < 0x6a
	.space 0x6a - (. - CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat)
	.endif
	@ data/maps/CaveOfOrigin_B1F/scripts.inc:74 CaveOfOrigin_B1F_Text_CantYouRememberSomehow
	.globl CaveOfOrigin_B1F_Text_CantYouRememberSomehow
CaveOfOrigin_B1F_Text_CantYouRememberSomehow: @ 0x0821941A
	.string "ミクリ『えっ おぼえてない って!?\nうーん それは こまったな……\pなんとか\nおもいだして もらえない だろうか……{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_CantYouRememberSomehow) > 0x3c
	.error "CaveOfOrigin_B1F_Text_CantYouRememberSomehow may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_CantYouRememberSomehow) < 0x3c
	.space 0x3c - (. - CaveOfOrigin_B1F_Text_CantYouRememberSomehow)
	.endif
	@ data/maps/CaveOfOrigin_B1F/scripts.inc:77 CaveOfOrigin_B1F_Text_WellHeadToSkyPillar
	.globl CaveOfOrigin_B1F_Text_WellHeadToSkyPillar
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar: @ 0x08219456
	.string "ミクリ『そらのはしら……?\pそうか! そらのはしら だったか!\pよし {PLAYER}{KUN}\nこうしては いられない\lいますぐ そらのはしらへ いくぞ!{EOS}"
	.if (. - CaveOfOrigin_B1F_Text_WellHeadToSkyPillar) > 0x46
	.error "CaveOfOrigin_B1F_Text_WellHeadToSkyPillar may not grow beyond its original slot"
	.endif
	.if (. - CaveOfOrigin_B1F_Text_WellHeadToSkyPillar) < 0x46
	.space 0x46 - (. - CaveOfOrigin_B1F_Text_WellHeadToSkyPillar)
	.endif
	@ Embedded ROM bytes: file offset 0x21949C, size 0x16C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0xA2, 0x94, 0x21, 0x08, 0x00, 0x21, 0xC3, 0x40, 0x01, 0x00, 0x07, 0x01, 0xB9, 0x94, 0x21
	.byte 0x08, 0x21, 0xC3, 0x40, 0x02, 0x00, 0x07, 0x01, 0xC5, 0x94, 0x21, 0x08, 0x02, 0x63, 0x04, 0x00
	.byte 0x02, 0x00, 0x18, 0x00, 0x65, 0x04, 0x00, 0x08, 0x03, 0x63, 0x04, 0x00, 0x03, 0x00, 0x18, 0x00
	.byte 0x65, 0x04, 0x00, 0x08, 0x03, 0x69, 0x16, 0x08, 0x80, 0x01, 0x00, 0x55, 0x04, 0x00, 0x4F, 0x04
	.byte 0x00, 0x37, 0x95, 0x21, 0x08, 0x51, 0x00, 0x00, 0x05, 0x03, 0x95, 0x21, 0x08, 0x02, 0x69, 0x16
	.byte 0x08, 0x80, 0x02, 0x00, 0x55, 0x04, 0x00, 0x4F, 0x04, 0x00, 0x43, 0x95, 0x21, 0x08, 0x51, 0x00
	.byte 0x00, 0x05, 0x03, 0x95, 0x21, 0x08, 0x02, 0x4F, 0xFF, 0x00, 0x2D, 0x36, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x0F, 0x00
	.4byte VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore @ ROM pointer 0x08219608
	.byte 0x09, 0x04, 0x5C, 0x03, 0x07, 0x02, 0x00, 0x00
	.4byte gText_Rom_2196B4 @ ROM pointer 0x082196B4
	.byte 0x0F, 0x00, 0xCA, 0x96, 0x21, 0x08, 0x09, 0x04, 0x2A, 0x5A, 0x03, 0x64, 0x04, 0x00, 0x29, 0x7E
	.byte 0x00, 0x19, 0xC3, 0x40, 0x08, 0x80, 0x6B, 0x02, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A
	.byte 0x0A, 0x0A, 0x09, 0xFE, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0xFE, 0x0F
	.byte 0x00, 0xCA, 0x96, 0x21, 0x08, 0x09, 0x02, 0x02, 0x5C, 0x00, 0x91, 0x02, 0x00, 0x00, 0xFD, 0x96
	.byte 0x21, 0x08, 0x43, 0x97, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00
	.byte 0x06, 0x01, 0x7E, 0x95, 0x21, 0x08, 0x0F, 0x00
	.4byte VictoryRoad_1F_Text_WallyPostBattle @ ROM pointer 0x08219759
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x05, 0x91, 0x02, 0x00, 0x00
	.4byte VictoryRoad_1F_Text_WallyIntro @ ROM pointer 0x082196FD
	.4byte gText_Rom_219743 @ ROM pointer 0x08219743
	.byte 0x0F, 0x00, 0x59, 0x97, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4F, 0x00, 0x00, 0x00
	.4byte VictoryRoad_1F_Text_EdgarIntro @ ROM pointer 0x0821979B
	.4byte VictoryRoad_1F_Text_EdgarDefeat @ ROM pointer 0x082197BE
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte VictoryRoad_1F_Text_EdgarPostBattle @ ROM pointer 0x082197CA
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x50, 0x00, 0x00, 0x00, 0xF2, 0x97, 0x21, 0x08, 0x15, 0x98, 0x21
	.byte 0x08, 0x0F, 0x00, 0x24, 0x98, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x60, 0x00, 0x00, 0x00
	.4byte VictoryRoad_1F_Text_HopeIntro @ ROM pointer 0x08219856
	.4byte VictoryRoad_1F_Text_HopeDefeat @ ROM pointer 0x0821987F
	.byte 0x0F, 0x00
	.4byte VictoryRoad_1F_Text_HopePostBattle @ ROM pointer 0x08219890
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x44, 0x01, 0x00, 0x00
	.4byte VictoryRoad_1F_Text_QuincyIntro @ ROM pointer 0x082198B0
	.4byte VictoryRoad_1F_Text_QuincyDefeat @ ROM pointer 0x082198D0
	.byte 0x0F, 0x00, 0xDA, 0x98, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x45, 0x01, 0x00, 0x00
	.4byte VictoryRoad_1F_Text_KatelynnIntro @ ROM pointer 0x08219928
	.4byte VictoryRoad_1F_Text_KatelynnDefeat @ ROM pointer 0x08219949
	.byte 0x0F, 0x00, 0x52, 0x99, 0x21, 0x08, 0x09, 0x06, 0x02
