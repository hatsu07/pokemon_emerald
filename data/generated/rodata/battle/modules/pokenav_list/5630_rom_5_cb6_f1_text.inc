	@ src/pokenav_list.c:100 gText_PokenavMatchCall_TrainerPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6F1
gText_Rom_5CB6F1: @ 0x085CB6F1
	.string "もってる ポケモン$"
	.if (. - gText_Rom_5CB6F1) != 0xa
	.error "gText_Rom_5CB6F1 must retain its original byte length"
	.endif
