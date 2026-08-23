
	@ trainerbattle-cfg:0x22D718 TrainerBattleText_22D756
	.globl BattleFacility_TrainerBattle_PlaceholderText
BattleFacility_TrainerBattle_PlaceholderText: @ 0x0822D756
	.string "テストメッセージ　です{EOS}"
	.if (. - BattleFacility_TrainerBattle_PlaceholderText) > 0xc
	.error "BattleFacility_TrainerBattle_PlaceholderText may not grow beyond its original slot"
	.endif
	.if (. - BattleFacility_TrainerBattle_PlaceholderText) < 0xc
	.space 0xc - (. - BattleFacility_TrainerBattle_PlaceholderText)
	.endif
