	@ field-script:0x21E599 FieldScriptText_21E722
	.globl FieldScriptText_21E722
FieldScriptText_21E722: @ 0x0821E722
	.string "ジン『ぼくたちの　ラブラブ　パワーでも\nかてないのは　はじめて　だよ！\lきみは　すごい　トレーナー　なんだね！"
	.byte EOS
	.if (. - FieldScriptText_21E722) > 0x38
	.error "FieldScriptText_21E722 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E722) < 0x38
	.space 0x38 - (. - FieldScriptText_21E722)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E75A
	.globl TrainerBattleText_21E75A
TrainerBattleText_21E75A: @ 0x0821E75A
	.string "ジン『ポケモン　いっぴき？\nそれだと　さみしくないか？"
	.byte EOS
	.if (. - TrainerBattleText_21E75A) > 0x1c
	.error "TrainerBattleText_21E75A may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E75A) < 0x1c
	.space 0x1c - (. - TrainerBattleText_21E75A)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E776
	.globl TrainerBattleText_21E776
TrainerBattleText_21E776: @ 0x0821E776
	.string "カホ『ちょっと　はずかしいけど\nふたりの　ラブラブ　パワー　みせてあげる！"
	.byte EOS
	.if (. - TrainerBattleText_21E776) > 0x26
	.error "TrainerBattleText_21E776 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E776) < 0x26
	.space 0x26 - (. - TrainerBattleText_21E776)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E79C
	.globl TrainerBattleText_21E79C
TrainerBattleText_21E79C: @ 0x0821E79C
	.string "カホ『やん！"
	.byte EOS
	.if (. - TrainerBattleText_21E79C) > 0x7
	.error "TrainerBattleText_21E79C may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E79C) < 0x7
	.space 0x7 - (. - TrainerBattleText_21E79C)
	.endif
