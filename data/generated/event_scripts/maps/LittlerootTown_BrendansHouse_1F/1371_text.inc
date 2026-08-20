	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:372 PlayersHouse_1F_Text_TheresAMovieOnTV
	.globl gText_Rom_1EFD18
gText_Rom_1EFD18: @ 0x081EFD18
	.string "テレビで えいがを やってる!\pおとなと こどもが ふたり ならんで\nおおきな ピアノの うえで おどってる!\pもう いかなきゃ!{EOS}"
	.if (. - gText_Rom_1EFD18) > 0x42
	.error "gText_Rom_1EFD18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFD18) < 0x42
	.space 0x42 - (. - gText_Rom_1EFD18)
	.endif
