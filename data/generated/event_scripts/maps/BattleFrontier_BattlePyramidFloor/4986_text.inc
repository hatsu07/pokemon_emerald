	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:368 BattlePyramid_Text_ZeroItemsRemaining6
	.globl gText_Rom_22E24B
gText_Rom_22E24B: @ 0x0822E24B
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが もう ないそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E24B) > 0x25
	.error "gText_Rom_22E24B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E24B) < 0x25
	.space 0x25 - (. - gText_Rom_22E24B)
	.endif
