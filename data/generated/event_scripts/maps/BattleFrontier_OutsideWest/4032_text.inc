	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:375 BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling
	.globl gText_Rom_21F29C
gText_Rom_21F29C: @ 0x0821F29C
	.string "この かいわいで なぜか つりを\nたのしもうと して いるのは\lおれ くらいの ものだろうな!\p…… え なんにも つれないの?\nがっ かり"
	.byte EOS
	.if (. - gText_Rom_21F29C) > 0x47
	.error "gText_Rom_21F29C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F29C) < 0x47
	.space 0x47 - (. - gText_Rom_21F29C)
	.endif
