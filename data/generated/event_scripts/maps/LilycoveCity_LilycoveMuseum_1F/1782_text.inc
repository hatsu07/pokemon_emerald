	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:161 LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum
	.globl gText_Rom_205D75
gText_Rom_205D75: @ 0x08205D75
	.string "ミナモ びじゅつかん へ ようこそ!\pポケモンたちを えがいた\nすばらしい めいがの かずかずを\lゆっくり ごらんに なって くださいね!{EOS}"
	.if (. - gText_Rom_205D75) > 0x46
	.error "gText_Rom_205D75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205D75) < 0x46
	.space 0x46 - (. - gText_Rom_205D75)
	.endif
