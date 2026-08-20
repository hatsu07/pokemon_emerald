	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:635 LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209134
gText_Rom_209134: @ 0x08209134
	.string "……\nぼく ひとりに なったって\pぜったい {STR_VAR_1}の ファンを\nやめない からね！\pだって ぼく きいたんだもん\n{STR_VAR_1}は ぜったいに まけないって{EOS}"
	.if (. - gText_Rom_209134) != 0x49
	.error "gText_Rom_209134 must retain its original byte length"
	.endif
