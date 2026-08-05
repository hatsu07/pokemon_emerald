	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAF3
gText_Rom_5CAAF3: @ 0x085CAAF3
	.string "マルチバトル$"
	.if (. - gText_Rom_5CAAF3) != 0x7
	.error "gText_Rom_5CAAF3 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAAF6
	.set gText_Rom_5CAAF6, gText_Rom_5CAAF3 + 0x3
	@ Replaced baserom.gba range: offset=0x5CAAFA, size=0x13
	.byte 0x6A, 0x88, 0xFF, 0x11, 0x36, 0x03, 0x0E, 0x2E, 0x0D, 0x29, 0xFF, 0x0E, 0x12, 0x22, 0x02, 0x2D
	.byte 0x07, 0x08, 0xFF
	.globl gUnknown_85CAB0D
gUnknown_85CAB0D: @ 0x085CAB0D

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAB0D
gText_Rom_5CAB0D: @ 0x085CAB0D
	.string "レベル50$"
	.if (. - gText_Rom_5CAB0D) > 0x6
	.error "gText_Rom_5CAB0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB0D) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB0D)
	.endif
	.globl gUnknown_85CAB13
gUnknown_85CAB13: @ 0x085CAB13

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAB13
gText_Rom_5CAB13: @ 0x085CAB13
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAB13) != 0x8
	.error "gText_Rom_5CAB13 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAB17
	.set gText_Rom_5CAB17, gText_Rom_5CAB13 + 0x4
	@ Replaced baserom.gba range: offset=0x5CAB1B, size=0x30
	.byte 0x05, 0x02, 0x0C, 0x02, 0x20, 0x3E, 0x00, 0xA3, 0xA1, 0xA1, 0xB7, 0xFF, 0x5B, 0x52, 0x5A, 0x5F
	.byte 0xAE, 0x91, 0x00, 0xA4, 0xA1, 0xA1, 0xB7, 0xFF, 0x70, 0xA0, 0x58, 0x5D, 0x55, 0x7A, 0x00, 0xA4
	.byte 0xA6, 0xA1, 0xB7, 0xFF, 0x1A, 0x0C, 0x28, 0x06, 0x10, 0xFF, 0x1F, 0x37, 0x29, 0x5A, 0x62, 0xFF

	@ src/data/script_menu.h:229 script_menu_line_229
	.globl gText_Rom_5CAB4B
gText_Rom_5CAB4B: @ 0x085CAB4B
	.string "すなのさか$"
	.if (. - gText_Rom_5CAB4B) > 0x6
	.error "gText_Rom_5CAB4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB4B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB4B)
	.endif

	@ src/data/script_menu.h:235 script_menu_line_235
	.globl gText_Rom_5CAB51
gText_Rom_5CAB51: @ 0x085CAB51
	.string "ウイリー$"
	.if (. - gText_Rom_5CAB51) > 0x5
	.error "gText_Rom_5CAB51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB51) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB51)
	.endif

	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5CAB56
gText_Rom_5CAB56: @ 0x085CAB56
	.string "ダニエル$"
	.if (. - gText_Rom_5CAB56) > 0x5
	.error "gText_Rom_5CAB56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB56) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB56)
	.endif

	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAB5B
gText_Rom_5CAB5B: @ 0x085CAB5B
	.string "ジャンプ$"
	.if (. - gText_Rom_5CAB5B) > 0x5
	.error "gText_Rom_5CAB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB5B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB5B)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_5CAB60
gText_Rom_5CAB60: @ 0x085CAB60
	.string "まんぞく$"
	.if (. - gText_Rom_5CAB60) > 0x5
	.error "gText_Rom_5CAB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB60) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB60)
	.endif

	@ src/data/script_menu.h:244 script_menu_line_244
	.globl gText_Rom_5CAB65
gText_Rom_5CAB65: @ 0x085CAB65
	.string "ふまん$"
	.if (. - gText_Rom_5CAB65) > 0x4
	.error "gText_Rom_5CAB65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB65) < 0x4
	.space 0x4 - (. - gText_Rom_5CAB65)
	.endif

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_5CAB69
gText_Rom_5CAB69: @ 0x085CAB69
	.string "しんかいのキバ$"
	.if (. - gText_Rom_5CAB69) > 0x8
	.error "gText_Rom_5CAB69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB69) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB69)
	.endif

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_5CAB71
gText_Rom_5CAB71: @ 0x085CAB71
	.string "しんかいのウロコ$"
	.if (. - gText_Rom_5CAB71) > 0x9
	.error "gText_Rom_5CAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB71) < 0x9
	.space 0x9 - (. - gText_Rom_5CAB71)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CAB7A
gText_Rom_5CAB7A: @ 0x085CAB7A
	.string "あおいビードロ$"
	.if (. - gText_Rom_5CAB7A) > 0x8
	.error "gText_Rom_5CAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB7A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB7A)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CAB82
gText_Rom_5CAB82: @ 0x085CAB82
	.string "きいろビードロ$"
	.if (. - gText_Rom_5CAB82) > 0x8
	.error "gText_Rom_5CAB82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB82) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB82)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CAB8A
gText_Rom_5CAB8A: @ 0x085CAB8A
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CAB8A) > 0x8
	.error "gText_Rom_5CAB8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB8A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB8A)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CAB92
gText_Rom_5CAB92: @ 0x085CAB92
	.string "しろいビードロ$"
	.if (. - gText_Rom_5CAB92) > 0x8
	.error "gText_Rom_5CAB92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB92) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB92)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CAB9A
gText_Rom_5CAB9A: @ 0x085CAB9A
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CAB9A) > 0x8
	.error "gText_Rom_5CAB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB9A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB9A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CABA2, size=0x7
	.byte 0x87, 0x77, 0x5D, 0x19, 0x02, 0x0D, 0xFF

	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CABA9
gText_Rom_5CABA9: @ 0x085CABA9
	.string "ガラスのつくえ$"
	.if (. - gText_Rom_5CABA9) != 0x8
	.error "gText_Rom_5CABA9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CABAD
	.set gText_Rom_5CABAD, gText_Rom_5CABA9 + 0x4
	@ Replaced baserom.gba range: offset=0x5CABB1, size=0x4F
	.byte 0x57, 0x73, 0x78, 0x95, 0xAE, 0x79, 0x00, 0x00, 0x00, 0xA2, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x51, 0x61, 0x84, 0x73, 0x95, 0xAE, 0x79, 0x00, 0x00, 0xA2, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x70, 0x8E, 0x8B, 0x7B, 0x53, 0x95, 0xAE, 0x79, 0x00, 0xA2, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x00, 0xA6, 0xA1, 0x1F, 0x02, 0x00, 0x00, 0xA2, 0xA1, 0xA1, 0xA1, 0xB7, 0xFF, 0xA6, 0xA1, 0xA1
	.byte 0x1F, 0x02, 0x00, 0xA2, 0xA1, 0xA1, 0xA1, 0xA1, 0xB7, 0xFF, 0x46, 0x12, 0x39, 0x2E, 0xFF

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_5CAC00
gText_Rom_5CAC00: @ 0x085CAC00
	.string "あんまり$"
	.if (. - gText_Rom_5CAC00) > 0x5
	.error "gText_Rom_5CAC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC00) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC00)
	.endif

	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_5CAC05
gText_Rom_5CAC05: @ 0x085CAC05
	.string "あかいかけら$"
	.if (. - gText_Rom_5CAC05) > 0x7
	.error "gText_Rom_5CAC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC05) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC05)
	.endif

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_5CAC0C
gText_Rom_5CAC0C: @ 0x085CAC0C
	.string "きいろいかけら$"
	.if (. - gText_Rom_5CAC0C) > 0x8
	.error "gText_Rom_5CAC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC0C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC0C)
	.endif

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_5CAC14
gText_Rom_5CAC14: @ 0x085CAC14
	.string "あおいかけら$"
	.if (. - gText_Rom_5CAC14) > 0x7
	.error "gText_Rom_5CAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC14) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC14)
	.endif

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_5CAC1B
gText_Rom_5CAC1B: @ 0x085CAC1B
	.string "みどりのかけら$"
	.if (. - gText_Rom_5CAC1B) > 0x8
	.error "gText_Rom_5CAC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC1B) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC1B)
	.endif

	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAC23
gText_Rom_5CAC23: @ 0x085CAC23
	.string "バトルフロンティア$"
	.if (. - gText_Rom_5CAC23) != 0xa
	.error "gText_Rom_5CAC23 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAC26
	.set gText_Rom_5CAC26, gText_Rom_5CAC23 + 0x3
	@ Replaced baserom.gba range: offset=0x5CAC2D, size=0x3
	.byte 0x20, 0x38, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_5CAC30
gText_Rom_5CAC30: @ 0x085CAC30
	.string "ひだり$"
	.if (. - gText_Rom_5CAC30) > 0x4
	.error "gText_Rom_5CAC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC30) < 0x4
	.space 0x4 - (. - gText_Rom_5CAC30)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAC34, size=0x50
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA3, 0x00, 0x00, 0xA2, 0xA6, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xAA, 0x00, 0x00, 0xA4, 0xA6, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA6, 0x00, 0x00, 0xA5, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA5, 0x00, 0x00, 0xA5, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA4, 0x00, 0x00, 0xA5, 0xA1, 0xA1, 0xA1, 0x1F, 0x02, 0xFF
	.globl gUnknown_85CAC84
gUnknown_85CAC84: @ 0x085CAC84

	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_5CAC84
gText_Rom_5CAC84: @ 0x085CAC84
	.string "かっこよさ$"
	.if (. - gText_Rom_5CAC84) > 0x6
	.error "gText_Rom_5CAC84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC84) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC84)
	.endif
	.globl gUnknown_85CAC8A
gUnknown_85CAC8A: @ 0x085CAC8A

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_5CAC8A
gText_Rom_5CAC8A: @ 0x085CAC8A
	.string "うつくしさ$"
	.if (. - gText_Rom_5CAC8A) > 0x6
	.error "gText_Rom_5CAC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC8A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC8A)
	.endif
	.globl gUnknown_85CAC90
gUnknown_85CAC90: @ 0x085CAC90

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_5CAC90
gText_Rom_5CAC90: @ 0x085CAC90
	.string "かわいさ$"
	.if (. - gText_Rom_5CAC90) > 0x5
	.error "gText_Rom_5CAC90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC90) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC90)
	.endif
	.globl gUnknown_85CAC95
gUnknown_85CAC95: @ 0x085CAC95

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_5CAC95
gText_Rom_5CAC95: @ 0x085CAC95
	.string "かしこさ$"
	.if (. - gText_Rom_5CAC95) > 0x5
	.error "gText_Rom_5CAC95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC95) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC95)
	.endif
	.globl gUnknown_85CAC9A
gUnknown_85CAC9A: @ 0x085CAC9A

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_5CAC9A
gText_Rom_5CAC9A: @ 0x085CAC9A
	.string "たくましさ$"
	.if (. - gText_Rom_5CAC9A) > 0x6
	.error "gText_Rom_5CAC9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC9A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC9A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_5CACA0
gText_Rom_5CACA0: @ 0x085CACA0
	.string "ノーマル$"
	.if (. - gText_Rom_5CACA0) > 0x5
	.error "gText_Rom_5CACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_5CACA5
gText_Rom_5CACA5: @ 0x085CACA5
	.string "スーパー$"
	.if (. - gText_Rom_5CACA5) > 0x5
	.error "gText_Rom_5CACA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA5) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA5)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_5CACAA
gText_Rom_5CACAA: @ 0x085CACAA
	.string "ハイパー$"
	.if (. - gText_Rom_5CACAA) > 0x5
	.error "gText_Rom_5CACAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAA) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAA)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_5CACAF
gText_Rom_5CACAF: @ 0x085CACAF
	.string "マスター$"
	.if (. - gText_Rom_5CACAF) > 0x5
	.error "gText_Rom_5CACAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAF) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAF)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_5CACB4
gText_Rom_5CACB4: @ 0x085CACB4
	.string "かっこいい$"
	.if (. - gText_Rom_5CACB4) > 0x6
	.error "gText_Rom_5CACB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACB4) < 0x6
	.space 0x6 - (. - gText_Rom_5CACB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_5CACBA
gText_Rom_5CACBA: @ 0x085CACBA
	.string "うつくしい$"
	.if (. - gText_Rom_5CACBA) > 0x6
	.error "gText_Rom_5CACBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACBA) < 0x6
	.space 0x6 - (. - gText_Rom_5CACBA)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_5CACC0
gText_Rom_5CACC0: @ 0x085CACC0
	.string "かわいい$"
	.if (. - gText_Rom_5CACC0) > 0x5
	.error "gText_Rom_5CACC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACC0)
	.endif
	@ Replaced baserom.gba range: offset=0x5CACC5, size=0x7
	.byte 0x06, 0x0C, 0x0A, 0x0F, 0x03, 0x15, 0xFF

	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_5CACCC
gText_Rom_5CACCC: @ 0x085CACCC
	.string "たくましい$"
	.if (. - gText_Rom_5CACCC) > 0x6
	.error "gText_Rom_5CACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACCC) < 0x6
	.space 0x6 - (. - gText_Rom_5CACCC)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CACD2
gText_Rom_5CACD2: @ 0x085CACD2
	.string "どうぐ$"
	.if (. - gText_Rom_5CACD2) > 0x4
	.error "gText_Rom_5CACD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD2) < 0x4
	.space 0x4 - (. - gText_Rom_5CACD2)
	.endif

	@ src/data/script_menu.h:1326 script_menu_line_1326
	.globl gText_Rom_5CACD6
gText_Rom_5CACD6: @ 0x085CACD6
	.string "たいせつなもの$"
	.if (. - gText_Rom_5CACD6) > 0x8
	.error "gText_Rom_5CACD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD6) < 0x8
	.space 0x8 - (. - gText_Rom_5CACD6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_5CACDE
gText_Rom_5CACDE: @ 0x085CACDE
	.string "ボール$"
	.if (. - gText_Rom_5CACDE) > 0x4
	.error "gText_Rom_5CACDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACDE) < 0x4
	.space 0x4 - (. - gText_Rom_5CACDE)
	.endif

	@ src/data/script_menu.h:1328 script_menu_line_1328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACE2
gText_Rom_5CACE2: @ 0x085CACE2
	.string "わざマシン$"
	.if (. - gText_Rom_5CACE2) != 0x6
	.error "gText_Rom_5CACE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CACE4
	.set gText_Rom_5CACE4, gText_Rom_5CACE2 + 0x2

	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_5CACE8
gText_Rom_5CACE8: @ 0x085CACE8
	.string "きのみ$"
	.if (. - gText_Rom_5CACE8) > 0x4
	.error "gText_Rom_5CACE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACE8) < 0x4
	.space 0x4 - (. - gText_Rom_5CACE8)
	.endif
	.globl gUnknown_85CACEC
gUnknown_85CACEC: @ 0x085CACEC

	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACEC
gText_Rom_5CACEC: @ 0x085CACEC
	.string "だれかのパソコン$"
	.if (. - gText_Rom_5CACEC) != 0x9
	.error "gText_Rom_5CACEC must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF0
	.set gText_Rom_5CACF0, gText_Rom_5CACEC + 0x4
	.globl gUnknown_85CACF5
gUnknown_85CACF5: @ 0x085CACF5

	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACF5
gText_Rom_5CACF5: @ 0x085CACF5
	.string "マユミのパソコン$"
	.if (. - gText_Rom_5CACF5) != 0x9
	.error "gText_Rom_5CACF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF9
	.set gText_Rom_5CACF9, gText_Rom_5CACF5 + 0x4
	.globl gUnknown_85CACFE
gUnknown_85CACFE: @ 0x085CACFE

	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACFE
gText_Rom_5CACFE: @ 0x085CACFE
	.string "{PLAYER}のパソコン$"
	.if (. - gText_Rom_5CACFE) != 0x8
	.error "gText_Rom_5CACFE must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD01
	.set gText_Rom_5CAD01, gText_Rom_5CACFE + 0x3
	.globl gUnknown_85CAD06
gUnknown_85CAD06: @ 0x085CAD06

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_5CAD06
gText_Rom_5CAD06: @ 0x085CAD06
	.string "でんどういり$"
	.if (. - gText_Rom_5CAD06) > 0x7
	.error "gText_Rom_5CAD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD06) < 0x7
	.space 0x7 - (. - gText_Rom_5CAD06)
	.endif
	.globl gUnknown_85CAD0D
gUnknown_85CAD0D: @ 0x085CAD0D

	@ src/strings.c:485 gText_LogOff
	.globl gText_Rom_5CAD0D
gText_Rom_5CAD0D: @ 0x085CAD0D
	.string "スイッチをきる$"
	.if (. - gText_Rom_5CAD0D) > 0x8
	.error "gText_Rom_5CAD0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD0D) < 0x8
	.space 0x8 - (. - gText_Rom_5CAD0D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAD15, size=0x5
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x00

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAD1A
gText_Rom_5CAD1A: @ 0x085CAD1A
	.string "あいて$"
	.if (. - gText_Rom_5CAD1A) > 0x4
	.error "gText_Rom_5CAD1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD1A) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD1A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAD1E, size=0x15
	.byte 0x64, 0xAE, 0x65, 0x72, 0x7E, 0x64, 0x1B, 0x36, 0x03, 0xFF, 0x3D, 0x35, 0x2E, 0x47, 0x00, 0x06
	.byte 0x2E, 0x28, 0x36, 0x03, 0xFF

	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD33
gText_Rom_5CAD33: @ 0x085CAD33
	.string "ノーマルランク$"
	.if (. - gText_Rom_5CAD33) != 0x8
	.error "gText_Rom_5CAD33 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD37
	.set gText_Rom_5CAD37, gText_Rom_5CAD33 + 0x4

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD3B
gText_Rom_5CAD3B: @ 0x085CAD3B
	.string "スーパーランク$"
	.if (. - gText_Rom_5CAD3B) != 0x8
	.error "gText_Rom_5CAD3B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD3F
	.set gText_Rom_5CAD3F, gText_Rom_5CAD3B + 0x4

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD43
gText_Rom_5CAD43: @ 0x085CAD43
	.string "ハイパーランク$"
	.if (. - gText_Rom_5CAD43) != 0x8
	.error "gText_Rom_5CAD43 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD47
	.set gText_Rom_5CAD47, gText_Rom_5CAD43 + 0x4

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD4B
gText_Rom_5CAD4B: @ 0x085CAD4B
	.string "マスターランク$"
	.if (. - gText_Rom_5CAD4B) != 0x8
	.error "gText_Rom_5CAD4B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD4F
	.set gText_Rom_5CAD4F, gText_Rom_5CAD4B + 0x4

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CAD53
gText_Rom_5CAD53: @ 0x085CAD53
	.string "シングル$"
	.if (. - gText_Rom_5CAD53) > 0x5
	.error "gText_Rom_5CAD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD53) < 0x5
	.space 0x5 - (. - gText_Rom_5CAD53)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CAD58
gText_Rom_5CAD58: @ 0x085CAD58
	.string "ダブル$"
	.if (. - gText_Rom_5CAD58) > 0x4
	.error "gText_Rom_5CAD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD58) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD58)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAD5C
gText_Rom_5CAD5C: @ 0x085CAD5C
	.string "マルチ$"
	.if (. - gText_Rom_5CAD5C) > 0x4
	.error "gText_Rom_5CAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD5C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD5C)
	.endif

	@ src/strings.c:489 gText_MultiLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD60
gText_Rom_5CAD60: @ 0x085CAD60
	.string "つうしん マルチ$"
	.if (. - gText_Rom_5CAD60) != 0x9
	.error "gText_Rom_5CAD60 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD65
	.set gText_Rom_5CAD65, gText_Rom_5CAD60 + 0x5

	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD69
gText_Rom_5CAD69: @ 0x085CAD69
	.string "バトルバッグ$"
	.if (. - gText_Rom_5CAD69) != 0x7
	.error "gText_Rom_5CAD69 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD6C
	.set gText_Rom_5CAD6C, gText_Rom_5CAD69 + 0x3
	@ Replaced baserom.gba range: offset=0x5CAD70, size=0x4
	.byte 0x23, 0x10, 0x0E, 0x10

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAD74
gText_Rom_5CAD74: @ 0x085CAD74
	.string "どうぐ$"
	.if (. - gText_Rom_5CAD74) > 0x4
	.error "gText_Rom_5CAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD74) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD74)
	.endif

	@ src/data/script_menu.h:565 script_menu_line_565
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD78
gText_Rom_5CAD78: @ 0x085CAD78
	.string "つうしんコンテスト$"
	.if (. - gText_Rom_5CAD78) != 0xa
	.error "gText_Rom_5CAD78 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD7C
	.set gText_Rom_5CAD7C, gText_Rom_5CAD78 + 0x4
	.globl gText_Rom_5CAD7E
	.set gText_Rom_5CAD7E, gText_Rom_5CAD78 + 0x6
	@ Replaced baserom.gba range: offset=0x5CAD82, size=0x1F
	.byte 0x54, 0x72, 0x77, 0x79, 0x95, 0x73, 0xAE, 0x95, 0x16, 0x12, 0x02, 0x13, 0xFF, 0x89, 0x7B, 0xAE
	.byte 0x96, 0x79, 0x73, 0xAE, 0x95, 0x16, 0x12, 0x02, 0x13, 0xFF, 0x54, 0x72, 0x77, 0x79, 0x95

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADA1
gText_Rom_5CADA1: @ 0x085CADA1
	.string "モード$"
	.if (. - gText_Rom_5CADA1) > 0x4
	.error "gText_Rom_5CADA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADA1) < 0x4
	.space 0x4 - (. - gText_Rom_5CADA1)
	.endif
	@ Replaced baserom.gba range: offset=0x5CADA5, size=0x5
	.byte 0x89, 0x7B, 0xAE, 0x96, 0x79

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADAA
gText_Rom_5CADAA: @ 0x085CADAA
	.string "モード$"
	.if (. - gText_Rom_5CADAA) > 0x4
	.error "gText_Rom_5CADAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAA) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAA)
	.endif
	.globl gUnknown_85CADAE
gUnknown_85CADAE: @ 0x085CADAE

