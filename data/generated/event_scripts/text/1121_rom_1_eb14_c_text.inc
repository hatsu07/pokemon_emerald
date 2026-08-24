	@ data/maps/Route112/scripts.inc:109 Route112_Text_LeaderGoingToAwakenThing
	.globl Route112_Text_LeaderGoingToAwakenThing
Route112_Text_LeaderGoingToAwakenThing: @ 0x081EB023
	.string "なあ おい リーダーは ほんとうに\nアイツを めざめさせる つもりか?{EOS}"
	.if (. - Route112_Text_LeaderGoingToAwakenThing) > 0x24
	.error "Route112_Text_LeaderGoingToAwakenThing may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LeaderGoingToAwakenThing) < 0x24
	.space 0x24 - (. - Route112_Text_LeaderGoingToAwakenThing)
	.endif
	@ data/maps/Route112/scripts.inc:113 Route112_Text_YeahWeNeedMeteorite
	.globl Route112_Text_YeahWeNeedMeteorite
Route112_Text_YeahWeNeedMeteorite: @ 0x081EB047
	.string "そうらしいな…… だが そのためには\nいんせきが ひつよう なんだってよ{EOS}"
	.if (. - Route112_Text_YeahWeNeedMeteorite) > 0x25
	.error "Route112_Text_YeahWeNeedMeteorite may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_YeahWeNeedMeteorite) < 0x25
	.space 0x25 - (. - Route112_Text_YeahWeNeedMeteorite)
	.endif
	@ data/maps/Route112/scripts.inc:117 Route112_Text_OhThatsWhyCrewWentToFallarbor
	.globl Route112_Text_OhThatsWhyCrewWentToFallarbor
Route112_Text_OhThatsWhyCrewWentToFallarbor: @ 0x081EB06C
	.string "ははーん それで さっき\nなかまが ハジツゲに むかったのか{EOS}"
	.if (. - Route112_Text_OhThatsWhyCrewWentToFallarbor) > 0x1f
	.error "Route112_Text_OhThatsWhyCrewWentToFallarbor may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_OhThatsWhyCrewWentToFallarbor) < 0x1f
	.space 0x1f - (. - Route112_Text_OhThatsWhyCrewWentToFallarbor)
	.endif
	@ data/maps/Route112/scripts.inc:121 Route112_Text_CantLetAnyonePassUntilTheyreBack
	.globl Route112_Text_CantLetAnyonePassUntilTheyreBack
Route112_Text_CantLetAnyonePassUntilTheyreBack: @ 0x081EB08B
	.string "ああ かれらが もどってくる までは\nだれも ここを とおすな! ってよ{EOS}"
	.if (. - Route112_Text_CantLetAnyonePassUntilTheyreBack) > 0x25
	.error "Route112_Text_CantLetAnyonePassUntilTheyreBack may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CantLetAnyonePassUntilTheyreBack) < 0x25
	.space 0x25 - (. - Route112_Text_CantLetAnyonePassUntilTheyreBack)
	.endif
	@ data/maps/Route112/scripts.inc:125 Route112_Text_NotEasyToGetBackToLavaridge
	.globl Route112_Text_NotEasyToGetBackToLavaridge
Route112_Text_NotEasyToGetBackToLavaridge: @ 0x081EB0B0
	.string "うーむ…… キンセツに いきたいのだが……\nこの だんさを おりてしまうと\lフエンに もどるのは たいへん だよな……{EOS}"
	.if (. - Route112_Text_NotEasyToGetBackToLavaridge) > 0x3c
	.error "Route112_Text_NotEasyToGetBackToLavaridge may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_NotEasyToGetBackToLavaridge) < 0x3c
	.space 0x3c - (. - Route112_Text_NotEasyToGetBackToLavaridge)
	.endif
	@ field-script:0x1EAF2C FieldScriptText_1EB0EC
	.globl gText_Rom_1EB0EC
gText_Rom_1EB0EC: @ 0x081EB0EC
	.string "「えんとつやま　ロープウェイ　のりば」\n{ESCAPE}{0x00}　このさき　すぐ！{EOS}"
	.if (. - gText_Rom_1EB0EC) > 0x21
	.error "gText_Rom_1EB0EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB0EC) < 0x21
	.space 0x21 - (. - gText_Rom_1EB0EC)
	.endif
	@ data/maps/Route112/scripts.inc:134 Route112_Text_MtChimneySign
	.globl Route112_Text_MtChimneySign
Route112_Text_MtChimneySign: @ 0x081EB10D
	.string "「えんとつやま」\pフエンタウンや ちょうじょう へは\nロープウェイを ごりよう ください{EOS}"
	.if (. - Route112_Text_MtChimneySign) > 0x2d
	.error "Route112_Text_MtChimneySign may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_MtChimneySign) < 0x2d
	.space 0x2d - (. - Route112_Text_MtChimneySign)
	.endif
	@ field-script:0x1EAF3E FieldScriptText_1EB13A
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB13A
gText_Rom_1EB13A: @ 0x081EB13A
	.string "ここは　112ばん　どうろ\n{ESCAPE}{0x02}　フエンタウン{EOS}"
	.if (. - gText_Rom_1EB13A) != 0x19
	.error "gText_Rom_1EB13A must retain its original byte length"
	.endif
	@ Embedded ROM bytes: file offset 0x1EB153, size 0x208
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0x5E, 0xB1, 0x1E, 0x08, 0x03, 0x61, 0xB1, 0x1E, 0x08, 0x00, 0xA6, 0x01, 0x02, 0x2A, 0x9D
	.byte 0x00, 0x04, 0x6A, 0xB1, 0x1E, 0x08, 0x02, 0x42, 0x00, 0x40, 0x01, 0x40, 0x21, 0x00, 0x40, 0x13
	.byte 0x00, 0x06, 0x00, 0x89, 0xB1, 0x1E, 0x08, 0x21, 0x00, 0x40, 0x54, 0x00, 0x06, 0x02, 0x89, 0xB1
	.byte 0x1E, 0x08, 0xA4, 0x07, 0x00, 0x03, 0x03, 0x0F, 0x00, 0x5B, 0xB3, 0x1E, 0x08, 0x09, 0x02, 0x02
	.byte 0x0F, 0x00
	.4byte Route113_Text_FunWalkingThroughAsh
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1EB3CC @ ROM pointer 0x081EB3CC
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0xE8, 0xB3, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0x54, 0xB4
	.byte 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte Route113_Text_TrainerTipsRegisterKeyItems
	.byte 0x09, 0x03, 0x02, 0x5C, 0x00
	.byte 0x46, 0x01, 0x00, 0x00
	.4byte Route113_Text_JaylenIntro @ ROM pointer 0x0825C5C8
	.4byte Route113_Text_JaylenDefeat @ ROM pointer 0x0825C5E7
	.byte 0x0F, 0x00, 0xF4, 0xC5, 0x25, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x47, 0x01, 0x00, 0x00
	.4byte Route113_Text_DillonIntro
	.4byte Route113_Text_DillonDefeat
	.byte 0x0F, 0x00
	.4byte Route113_Text_DillonPostBattle
	.byte 0x09, 0x06, 0x02
	.byte 0x5C, 0x02, 0xB2, 0x01, 0x00, 0x00, 0x7D, 0xC6, 0x25, 0x08, 0xA8, 0xC6, 0x25, 0x08, 0x1A, 0xB2
	.byte 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x39, 0xB2
	.byte 0x1E, 0x08, 0x0F, 0x00
	.4byte Route113_Text_MadelinePostBattle @ ROM pointer 0x0825C6BA
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route113_Text_MadelineRegister @ ROM pointer 0x0825C6D7
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xB2, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xB2, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xB2, 0x01, 0x00, 0x00
	.4byte Route113_Text_MadelineRematchIntro
	.byte 0x16, 0xC7, 0x25
	.byte 0x08, 0x0F, 0x00
	.4byte Route113_Text_MadelinePostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0xA3, 0x01, 0x00, 0x00
	.4byte Route113_Text_LaoIntro @ ROM pointer 0x0825C73F
	.4byte gText_Rom_25C75B @ ROM pointer 0x0825C75B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x7C, 0xB2, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x9B, 0xB2, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route113_Text_LaoPostBattle @ ROM pointer 0x0825C765
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route113_Text_LaoRegister @ ROM pointer 0x0825C78B
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xA3, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xA3, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xA3, 0x01, 0x00, 0x00
	.4byte Route113_Text_LaoRematchIntro
	.byte 0xC5, 0xC7, 0x25
	.byte 0x08, 0x0F, 0x00
	.4byte Route113_Text_LaoPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xA4, 0x01, 0x00, 0x00
	.4byte Route113_Text_LungIntro @ ROM pointer 0x0825C7FE
	.4byte Route113_Text_LungDefeat @ ROM pointer 0x0825C81C
	.byte 0x0F, 0x00
	.4byte Route113_Text_LungPostBattle @ ROM pointer 0x0825C83A
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x04, 0xA5, 0x02, 0x00, 0x00
	.4byte Route113_Text_ToriIntro @ ROM pointer 0x0825C860
	.4byte Route113_Text_ToriDefeat @ ROM pointer 0x0825C889
	.4byte Route113_Text_ToriNotEnoughMons @ ROM pointer 0x0825C8D3
	.byte 0x0F, 0x00
	.4byte Route113_Text_ToriPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x04, 0xA5, 0x02, 0x00, 0x00
	.4byte Route113_Text_TiaIntro @ ROM pointer 0x0825C8FA
	.4byte Route113_Text_TiaDefeat @ ROM pointer 0x0825C923
	.4byte Route113_Text_TiaNotEnoughMons @ ROM pointer 0x0825C96C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte Route113_Text_TiaPostBattle @ ROM pointer 0x0825C941
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xC4, 0x02, 0x00, 0x00
	.4byte Route113_Text_SophieIntro
	.4byte Route113_Text_SophieDefeat
	.byte 0x0F, 0x00
	.4byte Route113_Text_SophiePostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xC5, 0x02, 0x00, 0x00
	.4byte Route113_Text_CobyIntro @ ROM pointer 0x0825C992
	.4byte Route113_Text_CobyDefeat @ ROM pointer 0x0825C9AF
	.byte 0x0F, 0x00
	.4byte Route113_Text_CobyPostBattle @ ROM pointer 0x0825C9B5
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xC6, 0x02, 0x00, 0x00
	.4byte Route113_Text_LawrenceIntro @ ROM pointer 0x0825CA30
	.4byte Route113_Text_LawrenceDefeat @ ROM pointer 0x0825CA4B
	.byte 0x0F, 0x00, 0x57, 0xCA, 0x25, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xC7, 0x02, 0x00, 0x00
	.4byte Route113_Text_WyattIntro @ ROM pointer 0x0825CA6B
	.4byte Route113_Text_WyattDefeat @ ROM pointer 0x0825CA91
	.byte 0x0F, 0x00, 0xB6, 0xCA, 0x25, 0x08, 0x09, 0x06, 0x02
