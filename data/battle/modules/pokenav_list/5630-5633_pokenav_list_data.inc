	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5CB6EC
gText_Rom_5CB6EC: @ 0x085CB6EC
	.string "さくせん{EOS}"
	.if (. - gText_Rom_5CB6EC) > 0x5
	.error "gText_Rom_5CB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6EC) < 0x5
	.space 0x5 - (. - gText_Rom_5CB6EC)
	.endif
	@ src/pokenav_list.c:100 gText_PokenavMatchCall_TrainerPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokenavMatchCall_TrainerPokemon
gText_PokenavMatchCall_TrainerPokemon: @ 0x085CB6F1
	.string "もってる ポケモン{EOS}"
	.if (. - gText_PokenavMatchCall_TrainerPokemon) != 0xa
	.error "gText_PokenavMatchCall_TrainerPokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5CB6F6
	.set gText_Rom_5CB6F6, gText_PokenavMatchCall_TrainerPokemon + 0x5

	@ src/pokenav_list.c:101 gText_PokenavMatchCall_SelfIntroduction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokenavMatchCall_SelfIntroduction
gText_PokenavMatchCall_SelfIntroduction: @ 0x085CB6FB
	.string "じこしょうかい{EOS}"
	.if (. - gText_PokenavMatchCall_SelfIntroduction) != 0x8
	.error "gText_PokenavMatchCall_SelfIntroduction must retain its original byte length"
	.endif
