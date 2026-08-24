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
