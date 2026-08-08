	@ data/maps/BattleFrontier_Lounge4/scripts.inc:16 BattleFrontier_Lounge4_Text_WonderIfInterviewsAiring
	.globl gText_Rom_238596
gText_Rom_238596: @ 0x08238596
	.string "つよい トレーナーの インタビュー\nきょうは やって いるかなー?"
	.byte EOS
	.if (. - gText_Rom_238596) > 0x22
	.error "gText_Rom_238596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238596) < 0x22
	.space 0x22 - (. - gText_Rom_238596)
	.endif
