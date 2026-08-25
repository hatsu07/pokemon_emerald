	@ pret/pokeemerald-jp direct xref for 0x085CC32F: trainer_card.s: PrintProfilePhraseOnCard
	.globl gTrainerCardData_085CC32F
gTrainerCardData_085CC32F: @ 0x085CC32F
	@ analyzed canonical ROM range 0x085CC32F-0x085CC330
gText_TrainerCardProfilePhraseSuffix: @ 0x085CC32F
	.byte 0xB7, 0xFF
	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC331
gText_Rom_5CC331: @ 0x085CC331
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_5CC331) != 0x8
	.error "gText_Rom_5CC331 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC339
gText_Rom_5CC339: @ 0x085CC339
	@ Decoded text from ROM range: offset=0x5CC339, size=0x3
	.string "ひき{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085CC33C: trainer_card.s: PrintMoneyOnCard
	.globl gTrainerCardData_085CC33C
gTrainerCardData_085CC33C: @ 0x085CC33C
	@ analyzed canonical ROM range 0x085CC33C-0x085CC340
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0xF0, 0xFF, 0x13, 0x2E, 0xFF
	.globl gText_ContinueMenuTime_Copy_Rom_5CC341
