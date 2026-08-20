	@ data/maps/Route116/scripts.inc:351 Route116_Text_ScoundrelMadeOffWithPeeko
	.globl gText_Rom_1EBF46
gText_Rom_1EBF46: @ 0x081EBF46
	.string "あああ なんという ことだ!\pピーコちゃんと さんぽを していたら\nいきなり おかしな やつが やってきて\pわしの かわいい ピーコちゃんが\nうばわれて しまったのじゃ!\pうおー! ピーコちゃーん!{EOS}"
	.if (. - gText_Rom_1EBF46) > 0x64
	.error "gText_Rom_1EBF46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EBF46) < 0x64
	.space 0x64 - (. - gText_Rom_1EBF46)
	.endif
