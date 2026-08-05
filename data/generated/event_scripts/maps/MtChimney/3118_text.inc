	@ data/maps/MtChimney/scripts.inc:775 MtChimney_Text_ShelbyRematchIntro (+1 aliases)
	.globl gText_Rom_215889
gText_Rom_215889: @ 0x08215889
	.string "ポケモンと こころを ひとつに できれば\nすばらしいことが できそうじゃの$"
	.if (. - gText_Rom_215889) > 0x26
	.error "gText_Rom_215889 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215889) < 0x26
	.space 0x26 - (. - gText_Rom_215889)
	.endif
