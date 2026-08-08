	@ data/maps/BattleFrontier_Lounge2/scripts.inc:122 BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight
	.globl gText_Rom_236B9B
gText_Rom_236B9B: @ 0x08236B9B
	.string "どう? どう? どう?\pぼくの じょうほうは もちろん\nすごーく さんこうに なってるだろ?"
	.byte EOS
	.if (. - gText_Rom_236B9B) > 0x2f
	.error "gText_Rom_236B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B9B) < 0x2f
	.space 0x2f - (. - gText_Rom_236B9B)
	.endif
