	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:629 LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou
	.globl gText_Rom_2090DB
gText_Rom_2090DB: @ 0x082090DB
	.string "……\nぼく ひとりに なったって\pずっと {PLAYER}の ことを\nおうえん するよ！\pだって {PLAYER}の こと\nしんじてるもん！{EOS}"
	.if (. - gText_Rom_2090DB) > 0x3b
	.error "gText_Rom_2090DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090DB) < 0x3b
	.space 0x3b - (. - gText_Rom_2090DB)
	.endif
