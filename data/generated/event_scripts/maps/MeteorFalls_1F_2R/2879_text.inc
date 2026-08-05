	@ data/maps/MeteorFalls_1F_2R/scripts.inc:63 MeteorFalls_1F_2R_Text_NicolasIntro (+1 aliases)
	.globl gText_Rom_2131A4
gText_Rom_2131A4: @ 0x082131A4
	.string "ここは オレたち\nドラゴンつかいの しゅぎょうの ばしょ!\pチャンピオンも くる ばしょ といったら\nその すごさ わかるだろうか!?$"
	.if (. - gText_Rom_2131A4) > 0x44
	.error "gText_Rom_2131A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2131A4) < 0x44
	.space 0x44 - (. - gText_Rom_2131A4)
	.endif
