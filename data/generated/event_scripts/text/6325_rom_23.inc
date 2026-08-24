	@ field-script:0x23C42C FieldScriptText_23C564
	.globl gText_Rom_23C564
gText_Rom_23C564: @ 0x0823C564
	.string "わし　うみのいえ　の　オヤジ！\nひとよんで　うみサン！\pとにかく　あつい　ポケモンしょうぶを\nみることが　だいすき　なんだよねー！\pキミもねー　あつーい　ハートで\nここに　いる　トレーナーぜんいんに\lかてたら　いいものを　あげるよー"
	.byte EOS
	.if (. - gText_Rom_23C564) > 0x75
	.error "gText_Rom_23C564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C564) < 0x75
	.space 0x75 - (. - gText_Rom_23C564)
	.endif
	@ field-script:0x23C439 FieldScriptText_23C5D9
	.globl gText_Rom_23C5D9
gText_Rom_23C5D9: @ 0x0823C5D9
	.string "あつーい　しょうぶ　みせてくれー！\pそのためだけに　わし\nこの　うみのいえを　やってるんだねー！"
	.byte EOS
	.if (. - gText_Rom_23C5D9) > 0x31
	.error "gText_Rom_23C5D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C5D9) < 0x31
	.space 0x31 - (. - gText_Rom_23C5D9)
	.endif
	@ field-script:0x23C443 FieldScriptText_23C60A
	.globl gText_Rom_23C60A
gText_Rom_23C60A: @ 0x0823C60A
	.string "きみ　すごいねー！\nあつい　ポケモンしょうぶ　だったー\lわし　だいまんぞく　だよー！\pこれは　あつい　しょうぶを　みせてくれた\nきみへの　おれい　だよー\pサイコソーダ　はんダース　もっていきなよー"
	.byte EOS
	.if (. - gText_Rom_23C60A) > 0x63
	.error "gText_Rom_23C60A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C60A) < 0x63
	.space 0x63 - (. - gText_Rom_23C60A)
	.endif
	@ field-script:0x23C467 FieldScriptText_23C66D
	.globl gText_Rom_23C66D
gText_Rom_23C66D: @ 0x0823C66D
	.string "と　おもったけど　バッグ　いっぱいかー\nじゃあ　あずかっておくよー"
	.byte EOS
	.if (. - gText_Rom_23C66D) > 0x22
	.error "gText_Rom_23C66D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C66D) < 0x22
	.space 0x22 - (. - gText_Rom_23C66D)
	.endif
	@ field-script:0x23C475 FieldScriptText_23C68F
	.globl gText_Rom_23C68F
gText_Rom_23C68F: @ 0x0823C68F
	.string "ポケモンも　だいすき　サイコソーダ\nいっぽん　300えん　だよー\lかって　いきなよー！"
	.byte EOS
	.if (. - gText_Rom_23C68F) > 0x2c
	.error "gText_Rom_23C68F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C68F) < 0x2c
	.space 0x2c - (. - gText_Rom_23C68F)
	.endif
	@ field-script:0x23C4B6 FieldScriptText_23C6BB
	.globl gText_Rom_23C6BB
gText_Rom_23C6BB: @ 0x0823C6BB
	.string "はいよー"
	.byte EOS
	.if (. - gText_Rom_23C6BB) > 0x5
	.error "gText_Rom_23C6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6BB) < 0x5
	.space 0x5 - (. - gText_Rom_23C6BB)
	.endif
	@ field-script:0x23C4D9 FieldScriptText_23C6C0
	.globl gText_Rom_23C6C0
gText_Rom_23C6C0: @ 0x0823C6C0
	.string "おかねが　ないよー"
	.byte EOS
	.if (. - gText_Rom_23C6C0) > 0xa
	.error "gText_Rom_23C6C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6C0) < 0xa
	.space 0xa - (. - gText_Rom_23C6C0)
	.endif
	@ field-script:0x23C488 FieldScriptText_23C6CA
	.globl gText_Rom_23C6CA
gText_Rom_23C6CA: @ 0x0823C6CA
	.string "それは　ざんねん　だねー"
	.byte EOS
	.if (. - gText_Rom_23C6CA) > 0xd
	.error "gText_Rom_23C6CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6CA) < 0xd
	.space 0xd - (. - gText_Rom_23C6CA)
	.endif

	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C6D7
	.globl gText_Rom_23C6D7
gText_Rom_23C6D7: @ 0x0823C6D7
	.string "この　うみのいえで　いちばん\nあつい　ポケモンしょうぶが　できるのは\lこの　オレさま　だぜ！！"
	.byte EOS
	.if (. - gText_Rom_23C6D7) > 0x30
	.error "gText_Rom_23C6D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6D7) < 0x30
	.space 0x30 - (. - gText_Rom_23C6D7)
	.endif

	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C707
	.globl gText_Rom_23C707
gText_Rom_23C707: @ 0x0823C707
	.string "たしかに　あつい　しょうぶ　だった\nまけて　なっとく　って　かんじ　だぜ！"
	.byte EOS
	.if (. - gText_Rom_23C707) > 0x26
	.error "gText_Rom_23C707 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C707) < 0x26
	.space 0x26 - (. - gText_Rom_23C707)
	.endif
