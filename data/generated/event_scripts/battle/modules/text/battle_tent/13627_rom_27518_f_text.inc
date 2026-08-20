	@ data/text/battle_tent.inc:177 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_27518F
gText_Rom_27518F: @ 0x0827518F
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\p3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pそして タマゴ{STR_VAR_1}ちょうせん\nさせる ことは できん!\pじゅんびを ととえてから また きなさい{EOS}"
	.if (. - gText_Rom_27518F) != 0x9f
	.error "gText_Rom_27518F must retain its original byte length"
	.endif
