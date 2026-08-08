	@ data/maps/Route102/scripts.inc:76 Route102_Text_WatchMeCatchPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E693C
gText_Rom_1E693C: @ 0x081E693C
	.string "ミツル『{PLAYER}さん……\nポケモンって こういう くさむらに\lいたり するんでしょ……?\pぼくが じょうずに　つかまえられるか\nそこで みてて くださいね……\p……うわっ!!$"
	.if (. - gText_Rom_1E693C) != 0x56
	.error "gText_Rom_1E693C must retain its original byte length"
	.endif
