	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:377 RivalsHouse_2F_Text_MayJustCheckingMyPokedex
	.globl gText_Rom_1F10CD
gText_Rom_1F10CD: @ 0x081F10CD
	.string "ハルカ『{PLAYER}{KUN}!\pあたし いまね\nポケモンずかんを ながめていたの\pみつけた だけで\nつかまえていない ポケモンや\lしんか しそうな ポケモン\lまだまだ いっぱい いるんだよね\pこんどは どこに\nポケモン つかまえに いこうかな?$"
	.if (. - gText_Rom_1F10CD) > 0x75
	.error "gText_Rom_1F10CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F10CD) < 0x75
	.space 0x75 - (. - gText_Rom_1F10CD)
	.endif
