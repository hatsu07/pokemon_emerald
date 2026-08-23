	@ data/maps/Route102/scripts.inc:76 Route102_Text_WatchMeCatchPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_1E693C: @ 0x081E693C
	.string "ミツル『{PLAYER}さん……\nポケモンって こういう くさむらに\lいたり するんでしょ……?\pぼくが じょうずに　つかまえられるか\nそこで みてて くださいね……\p……うわっ!!{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_1E693C) != 0x56
	.error ".Lbatch81_text_start_gText_Rom_1E693C must retain its original byte length"
	.endif
