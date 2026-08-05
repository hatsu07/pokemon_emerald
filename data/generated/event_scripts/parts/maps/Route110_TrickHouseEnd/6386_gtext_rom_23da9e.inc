	@ data/maps/Route110_TrickHouseEnd/scripts.inc:250 Route110_TrickHouseEnd_Text_YouveMadeItToMe
	.globl gText_Rom_23DA9E
gText_Rom_23DA9E: @ 0x0823DA9E
	.string "あっ!\nあんた ここまで こられたのか!\lうーむ…… できる!"
	.byte EOS
	.if (. - gText_Rom_23DA9E) > 0x20
	.error "gText_Rom_23DA9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DA9E) < 0x20
	.space 0x20 - (. - gText_Rom_23DA9E)
	.endif
