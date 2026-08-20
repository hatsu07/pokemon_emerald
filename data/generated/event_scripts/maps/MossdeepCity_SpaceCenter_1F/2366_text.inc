	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:287 MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20D126
gText_Rom_20D126: @ 0x0820D126
	.string "こんな さわぎの とちゅう だけど……\pロケットが はっしゃ したよ!\nこれで {STR_VAR_1}かい うちあげ せいこうだ!{EOS}"
	.if (. - gText_Rom_20D126) != 0x39
	.error "gText_Rom_20D126 must retain its original byte length"
	.endif
