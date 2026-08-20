	@ data/text/battle_tent.inc:165 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2750F0
gText_Rom_2750F0: @ 0x082750F0
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\l3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pなお タマゴ{STR_VAR_1}ちょうせん させる ことは できん!\pじゅんびを ととのえてから また きなさい{EOS}"
	.if (. - gText_Rom_2750F0) != 0x9f
	.error "gText_Rom_2750F0 must retain its original byte length"
	.endif
