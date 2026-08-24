	@ field-script:0x23C42C FieldScriptText_23C564
	.globl FieldScriptText_23C564
FieldScriptText_23C564: @ 0x0823C564
	.string "わし　うみのいえ　の　オヤジ！\nひとよんで　うみサン！\pとにかく　あつい　ポケモンしょうぶを\nみることが　だいすき　なんだよねー！\pキミもねー　あつーい　ハートで\nここに　いる　トレーナーぜんいんに\lかてたら　いいものを　あげるよー"
	.byte EOS
	.if (. - FieldScriptText_23C564) > 0x75
	.error "FieldScriptText_23C564 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C564) < 0x75
	.space 0x75 - (. - FieldScriptText_23C564)
	.endif
	@ field-script:0x23C439 FieldScriptText_23C5D9
	.globl FieldScriptText_23C5D9
FieldScriptText_23C5D9: @ 0x0823C5D9
	.string "あつーい　しょうぶ　みせてくれー！\pそのためだけに　わし\nこの　うみのいえを　やってるんだねー！"
	.byte EOS
	.if (. - FieldScriptText_23C5D9) > 0x31
	.error "FieldScriptText_23C5D9 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C5D9) < 0x31
	.space 0x31 - (. - FieldScriptText_23C5D9)
	.endif
	@ field-script:0x23C443 FieldScriptText_23C60A
	.globl FieldScriptText_23C60A
FieldScriptText_23C60A: @ 0x0823C60A
	.string "きみ　すごいねー！\nあつい　ポケモンしょうぶ　だったー\lわし　だいまんぞく　だよー！\pこれは　あつい　しょうぶを　みせてくれた\nきみへの　おれい　だよー\pサイコソーダ　はんダース　もっていきなよー"
	.byte EOS
	.if (. - FieldScriptText_23C60A) > 0x63
	.error "FieldScriptText_23C60A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C60A) < 0x63
	.space 0x63 - (. - FieldScriptText_23C60A)
	.endif
	@ field-script:0x23C467 FieldScriptText_23C66D
	.globl FieldScriptText_23C66D
FieldScriptText_23C66D: @ 0x0823C66D
	.string "と　おもったけど　バッグ　いっぱいかー\nじゃあ　あずかっておくよー"
	.byte EOS
	.if (. - FieldScriptText_23C66D) > 0x22
	.error "FieldScriptText_23C66D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C66D) < 0x22
	.space 0x22 - (. - FieldScriptText_23C66D)
	.endif
	@ field-script:0x23C475 FieldScriptText_23C68F
	.globl FieldScriptText_23C68F
FieldScriptText_23C68F: @ 0x0823C68F
	.string "ポケモンも　だいすき　サイコソーダ\nいっぽん　300えん　だよー\lかって　いきなよー！"
	.byte EOS
	.if (. - FieldScriptText_23C68F) > 0x2c
	.error "FieldScriptText_23C68F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C68F) < 0x2c
	.space 0x2c - (. - FieldScriptText_23C68F)
	.endif
	@ field-script:0x23C4B6 FieldScriptText_23C6BB
	.globl FieldScriptText_23C6BB
FieldScriptText_23C6BB: @ 0x0823C6BB
	.string "はいよー"
	.byte EOS
	.if (. - FieldScriptText_23C6BB) > 0x5
	.error "FieldScriptText_23C6BB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C6BB) < 0x5
	.space 0x5 - (. - FieldScriptText_23C6BB)
	.endif
	@ field-script:0x23C4D9 FieldScriptText_23C6C0
	.globl FieldScriptText_23C6C0
FieldScriptText_23C6C0: @ 0x0823C6C0
	.string "おかねが　ないよー"
	.byte EOS
	.if (. - FieldScriptText_23C6C0) > 0xa
	.error "FieldScriptText_23C6C0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C6C0) < 0xa
	.space 0xa - (. - FieldScriptText_23C6C0)
	.endif
	@ field-script:0x23C488 FieldScriptText_23C6CA
	.globl FieldScriptText_23C6CA
FieldScriptText_23C6CA: @ 0x0823C6CA
	.string "それは　ざんねん　だねー"
	.byte EOS
	.if (. - FieldScriptText_23C6CA) > 0xd
	.error "FieldScriptText_23C6CA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C6CA) < 0xd
	.space 0xd - (. - FieldScriptText_23C6CA)
	.endif

	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C6D7
	.globl TrainerBattleText_23C6D7
TrainerBattleText_23C6D7: @ 0x0823C6D7
	.string "この　うみのいえで　いちばん\nあつい　ポケモンしょうぶが　できるのは\lこの　オレさま　だぜ！！"
	.byte EOS
	.if (. - TrainerBattleText_23C6D7) > 0x30
	.error "TrainerBattleText_23C6D7 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C6D7) < 0x30
	.space 0x30 - (. - TrainerBattleText_23C6D7)
	.endif

	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C707
	.globl TrainerBattleText_23C707
TrainerBattleText_23C707: @ 0x0823C707
	.string "たしかに　あつい　しょうぶ　だった\nまけて　なっとく　って　かんじ　だぜ！"
	.byte EOS
	.if (. - TrainerBattleText_23C707) > 0x26
	.error "TrainerBattleText_23C707 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C707) < 0x26
	.space 0x26 - (. - TrainerBattleText_23C707)
	.endif
	@ field-script:0x23C505 FieldScriptText_23C72D
	.globl FieldScriptText_23C72D
FieldScriptText_23C72D: @ 0x0823C72D
	.string "オレは　カイナに　くるたびに\nここで　あつい　しょうぶと\lつめたい　サイコソーダを　たのしむんだ！"
	.byte EOS
	.if (. - FieldScriptText_23C72D) > 0x32
	.error "FieldScriptText_23C72D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C72D) < 0x32
	.space 0x32 - (. - FieldScriptText_23C72D)
	.endif

	@ trainerbattle-cfg:0x23C50C TrainerBattleText_23C75F
	.globl TrainerBattleText_23C75F
TrainerBattleText_23C75F: @ 0x0823C75F
	.string "たいくつな　しょうぶ　なんて　ムダ！\pもえあがるような　しょうぶ　こそ\nトレーナーと　ポケモンを　きたえるのよ！"
	.byte EOS
	.if (. - TrainerBattleText_23C75F) > 0x39
	.error "TrainerBattleText_23C75F may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C75F) < 0x39
	.space 0x39 - (. - TrainerBattleText_23C75F)
	.endif

	@ trainerbattle-cfg:0x23C50C TrainerBattleText_23C798
	.globl TrainerBattleText_23C798
TrainerBattleText_23C798: @ 0x0823C798
	.string "あつい　じゃない！"
	.byte EOS
	.if (. - TrainerBattleText_23C798) > 0xa
	.error "TrainerBattleText_23C798 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C798) < 0xa
	.space 0xa - (. - TrainerBattleText_23C798)
	.endif
