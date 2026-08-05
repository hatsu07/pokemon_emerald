	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:745 Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward
	.globl gText_Rom_23D574
gText_Rom_23D574: @ 0x0823D574
	.string "おお あんた! さては このあいだの\nほうびを とりに きたんだろう そうだろう!\lよしっ いま やろう!"
	.byte EOS
	.if (. - gText_Rom_23D574) > 0x36
	.error "gText_Rom_23D574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D574) < 0x36
	.space 0x36 - (. - gText_Rom_23D574)
	.endif
