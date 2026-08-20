	@ data/maps/MtChimney/scripts.inc:756 MtChimney_Text_ShelbyIntro (+1 aliases)
	.globl gText_Rom_215809
gText_Rom_215809: @ 0x08215809
	.string "おんせんに つかって\nリフレッシュ してきたからねえ\lいまの あたしゃあ つよいよ!{EOS}"
	.if (. - gText_Rom_215809) > 0x2b
	.error "gText_Rom_215809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215809) < 0x2b
	.space 0x2b - (. - gText_Rom_215809)
	.endif
