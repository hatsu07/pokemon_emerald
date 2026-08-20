	@ data/maps/LittlerootTown/scripts.inc:948 LittlerootTown_Text_ComeHomeIfAnythingHappens
	.globl gText_Rom_1E44B3
gText_Rom_1E44B3: @ 0x081E44B3
	.string "…… …… ……\n…… …… ……\pあなたが じぶんの ポケモンを\nもつように なった だなんて……\lパパが しったら おおよろこび するわよ!\p……でも むりは しないでね\nなにか あれば かえって くればいいから\pじゃあ がんばってね!{EOS}"
	.if (. - gText_Rom_1E44B3) > 0x79
	.error "gText_Rom_1E44B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E44B3) < 0x79
	.space 0x79 - (. - gText_Rom_1E44B3)
	.endif
