	@ data/maps/Route123/scripts.inc:173 Route123_Text_LoveGrassMonsHaveAny
	.globl Route123_Text_LoveGrassMonsHaveAny
Route123_Text_LoveGrassMonsHaveAny: @ 0x081EE6AD
	.string "あたし くさタイプの ポケモン\nだいすき なの！\pあなたは くさタイプの ポケモン\nもって いないの……？{EOS}"
	.if (. - Route123_Text_LoveGrassMonsHaveAny) > 0x36
	.error "Route123_Text_LoveGrassMonsHaveAny may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_LoveGrassMonsHaveAny) < 0x36
	.space 0x36 - (. - Route123_Text_LoveGrassMonsHaveAny)
	.endif
	@ data/maps/Route123/scripts.inc:177 Route123_Text_YouLikeGrassMonsTooHaveThis
	.globl Route123_Text_YouLikeGrassMonsTooHaveThis
Route123_Text_YouLikeGrassMonsTooHaveThis: @ 0x081EE6E3
	.string "あら！？\pあなたも くさタイプの ポケモンが\nだいすき なのね！\pうれしいから これ あげちゃう！\nともだちの しるし よ！{EOS}"
	.if (. - Route123_Text_YouLikeGrassMonsTooHaveThis) > 0x3f
	.error "Route123_Text_YouLikeGrassMonsTooHaveThis may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_YouLikeGrassMonsTooHaveThis) < 0x3f
	.space 0x3f - (. - Route123_Text_YouLikeGrassMonsTooHaveThis)
	.endif
	@ data/maps/Route123/scripts.inc:184 Route123_Text_CheckTreesWithMyGrassMon
	.globl Route123_Text_CheckTreesWithMyGrassMon
Route123_Text_CheckTreesWithMyGrassMon: @ 0x081EE722
	.string "くさポケモンと いっしょに\nきの ようすを みてまわってるの\lいってみれば きの おいしゃさんね{EOS}"
	.if (. - Route123_Text_CheckTreesWithMyGrassMon) > 0x31
	.error "Route123_Text_CheckTreesWithMyGrassMon may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CheckTreesWithMyGrassMon) < 0x31
	.space 0x31 - (. - Route123_Text_CheckTreesWithMyGrassMon)
	.endif
	@ field-script:0x1EE43B FieldScriptText_1EE753
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_1EE753
FieldScriptText_1EE753: @ 0x081EE753
	.string "{ESCAPE}{0x03}　123ばん　どうろ\n{ESCAPE}{0x02}　118ばん　どうろ{EOS}"
	.if (. - FieldScriptText_1EE753) != 0x1c
	.error "FieldScriptText_1EE753 must retain its original byte length"
	.endif
	@ field-script:0x1EE444 FieldScriptText_1EE76F
	.globl FieldScriptText_1EE76F
FieldScriptText_1EE76F: @ 0x081EE76F
	.string "{ESCAPE}{0x00}……　おくりびやま\nこころ　よわきもの　ちかよる　べからず{EOS}"
	.if (. - FieldScriptText_1EE76F) > 0x21
	.error "FieldScriptText_1EE76F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EE76F) < 0x21
	.space 0x21 - (. - FieldScriptText_1EE76F)
	.endif
	@ data/maps/Route123/scripts.inc:196 Route123_Text_BerryMastersHouse
	.globl Route123_Text_BerryMastersHouse
Route123_Text_BerryMastersHouse: @ 0x081EE790
	.string "「きのみ めいじんの いえ」{EOS}"
	.if (. - Route123_Text_BerryMastersHouse) > 0xf
	.error "Route123_Text_BerryMastersHouse may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BerryMastersHouse) < 0xf
	.space 0xf - (. - Route123_Text_BerryMastersHouse)
	.endif
	@ Embedded ROM bytes: file offset 0x1EE79F, size 0x1CD
	@ semanticized-mass: resolved embedded ROM pointers
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0xA5, 0xE7, 0x1E, 0x08, 0x00, 0x2B, 0x8A, 0x08, 0x07, 0x01, 0x06, 0x31, 0x24, 0x08, 0x02
	.byte 0x0F, 0x00, 0x6C, 0xE9, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x5C, 0x00, 0x9F, 0x00, 0x00, 0x00
	.4byte Route124_Text_SpencerIntro @ ROM pointer 0x082600D9
	.4byte Route124_Text_SpencerDefeat @ ROM pointer 0x08260110
	.byte 0x0F, 0x00
	.4byte Route124_Text_SpencerPostBattle @ ROM pointer 0x08260123
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xA0, 0x00, 0x00, 0x00
	.4byte Route124_Text_RolandIntro @ ROM pointer 0x0826015C
	.4byte Route124_Text_RolandDefeat @ ROM pointer 0x08260187
	.byte 0x0F, 0x00
	.4byte Route124_Text_RolandPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0xC1, 0x01, 0x00, 0x00
	.4byte Route124_Text_JennyIntro @ ROM pointer 0x082601C6
	.4byte Route124_Text_JennyDefeat @ ROM pointer 0x082601EA
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x12, 0xE8, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x31, 0xE8, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route124_Text_JennyPostBattle @ ROM pointer 0x082601F7
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route124_Text_JennyRegister @ ROM pointer 0x08260237
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xC1, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xC1, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xC1, 0x01, 0x00, 0x00
	.4byte Route124_Text_JennyRematchIntro
	.4byte Route124_Text_JennyRematchDefeat
	.byte 0x0F, 0x00
	.4byte Route124_Text_JennyPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xC2, 0x01, 0x00, 0x00
	.4byte Route124_Text_GraceIntro @ ROM pointer 0x082602AB
	.4byte Route124_Text_GraceDefeat @ ROM pointer 0x082602CE
	.byte 0x0F, 0x00
	.4byte Route124_Text_GracePostBattle @ ROM pointer 0x082602E7
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xAE, 0x00, 0x00, 0x00
	.4byte Route124_Text_ChadIntro @ ROM pointer 0x08260306
	.4byte Route124_Text_ChadDefeat @ ROM pointer 0x0826032E
	.byte 0x0F, 0x00
	.4byte Route124_Text_ChadPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x06, 0xAF, 0x02, 0x00, 0x00
	.4byte Route124_Text_LilaIntro @ ROM pointer 0x08260374
	.4byte Route124_Text_LilaDefeat @ ROM pointer 0x082603B4
	.4byte gText_Rom_260407 @ ROM pointer 0x08260407
	.byte 0xA6, 0xE8, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xBF, 0xE8, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route124_Text_LilaPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route124_Text_LilaRoyRegister @ ROM pointer 0x082604A3
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xAF, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xAF, 0x02, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0xAF, 0x02, 0x00, 0x00
	.4byte Route124_Text_LilaRematchIntro @ ROM pointer 0x082604EC
	.4byte Route124_Text_LilaRematchDefeat @ ROM pointer 0x08260536
	.4byte gText_Rom_2605A2 @ ROM pointer 0x082605A2
	.byte 0x0F, 0x00
	.4byte Route124_Text_LilaPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x06, 0xAF, 0x02, 0x00, 0x00
	.4byte Route124_Text_RoyIntro @ ROM pointer 0x0826042D
	.4byte Route124_Text_RoyDefeat @ ROM pointer 0x08260454
	.4byte gText_Rom_2604C9 @ ROM pointer 0x082604C9
	.byte 0x0A, 0xE9, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x23, 0xE9, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route124_Text_RoyPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route124_Text_LilaRoyRegister @ ROM pointer 0x082604A3
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xAF, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xAF, 0x02, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0xAF, 0x02, 0x00, 0x00
	.4byte Route124_Text_RoyRematchIntro @ ROM pointer 0x082605C8
	.4byte Route124_Text_RoyRematchDefeat @ ROM pointer 0x082605EF
	.4byte gText_Rom_260644 @ ROM pointer 0x08260644
	.byte 0x0F, 0x00
	.4byte Route124_Text_RoyPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x0F, 0x00, 0x00, 0x00
	.4byte Route124_Text_DeclanIntro @ ROM pointer 0x08260667
	.4byte Route124_Text_DeclanDefeat @ ROM pointer 0x08260695
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte Route124_Text_DeclanPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x53, 0x02, 0x00, 0x00
	.4byte Route124_Text_IsabellaIntro @ ROM pointer 0x082606CC
	.4byte Route124_Text_IsabellaDefeat @ ROM pointer 0x082606E2
	.byte 0x0F, 0x00
	.4byte Route124_Text_IsabellaPostBattle
	.byte 0x09, 0x06, 0x02
