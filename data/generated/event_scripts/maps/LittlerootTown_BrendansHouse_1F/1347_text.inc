	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:320 PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor
	.globl gText_Rom_1EFB7A
gText_Rom_1EFB7A: @ 0x081EFB7A
	.string "……あ そうそう! このまち には\nオダマキはかせ っていう\lパパの おともだちが いるの\pはかせの いえは おとなり だから\nきちんと あいさつ してくると いいわ!{EOS}"
	.if (. - gText_Rom_1EFB7A) > 0x55
	.error "gText_Rom_1EFB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB7A) < 0x55
	.space 0x55 - (. - gText_Rom_1EFB7A)
	.endif
