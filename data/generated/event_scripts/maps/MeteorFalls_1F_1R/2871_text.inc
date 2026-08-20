	@ data/maps/MeteorFalls_1F_1R/scripts.inc:280 MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo
	.globl gText_Rom_212F38
gText_Rom_212F38: @ 0x08212F38
	.string "アオギリ『そうだな!\pマグマだんの やつら えんとつやまで\nなにを しでかすか わからない!{EOS}"
	.if (. - gText_Rom_212F38) > 0x2f
	.error "gText_Rom_212F38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F38) < 0x2f
	.space 0x2f - (. - gText_Rom_212F38)
	.endif
