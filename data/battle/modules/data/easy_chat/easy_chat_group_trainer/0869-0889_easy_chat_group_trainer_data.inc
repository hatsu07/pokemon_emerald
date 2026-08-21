	@ src/data/easy_chat/easy_chat_group_trainer.h:4 easy_chat_group_trainer_line_4
	.globl gText_Rom_574718
gText_Rom_574718: @ 0x08574718
	.string "きみにきめた!{EOS}"
	.if (. - gText_Rom_574718) > 0x8
	.error "gText_Rom_574718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574718) < 0x8
	.space 0x8 - (. - gText_Rom_574718)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:10 easy_chat_group_trainer_line_10
	.globl gText_Rom_574720
gText_Rom_574720: @ 0x08574720
	.string "ゲット{EOS}"
	.if (. - gText_Rom_574720) > 0x4
	.error "gText_Rom_574720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574720) < 0x4
	.space 0x4 - (. - gText_Rom_574720)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_574724
gText_Rom_574724: @ 0x08574724
	.string "こうかん{EOS}"
	.if (. - gText_Rom_574724) > 0x5
	.error "gText_Rom_574724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574724) < 0x5
	.space 0x5 - (. - gText_Rom_574724)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574729
gText_Rom_574729: @ 0x08574729
	.string "サファイア{EOS}"
	.if (. - gText_Rom_574729) != 0x6
	.error "gText_Rom_574729 must retain its original byte length"
	.endif
	.globl gText_Rom_57472A
	.set gText_Rom_57472A, gText_Rom_574729 + 0x1

	@ src/data/easy_chat/easy_chat_group_trainer.h:28 easy_chat_group_trainer_line_28
	.globl gText_Rom_57472F
gText_Rom_57472F: @ 0x0857472F
	.string "しんか{EOS}"
	.if (. - gText_Rom_57472F) > 0x4
	.error "gText_Rom_57472F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57472F) < 0x4
	.space 0x4 - (. - gText_Rom_57472F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_574733
gText_Rom_574733: @ 0x08574733
	.string "ずかん{EOS}"
	.if (. - gText_Rom_574733) > 0x4
	.error "gText_Rom_574733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574733) < 0x4
	.space 0x4 - (. - gText_Rom_574733)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:40 easy_chat_group_trainer_line_40
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574737
gText_Rom_574737: @ 0x08574737
	.string "せいかく{EOS}"
	.if (. - gText_Rom_574737) != 0x5
	.error "gText_Rom_574737 must retain its original byte length"
	.endif
	.globl gText_Rom_574738
	.set gText_Rom_574738, gText_Rom_574737 + 0x1

	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_57473C
gText_Rom_57473C: @ 0x0857473C
	.string "センター{EOS}"
	.if (. - gText_Rom_57473C) > 0x5
	.error "gText_Rom_57473C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57473C) < 0x5
	.space 0x5 - (. - gText_Rom_57473C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:52 easy_chat_group_trainer_line_52 (+3 aliases)
	.globl gText_Rom_574741
gText_Rom_574741: @ 0x08574741
	.string "タマゴ{EOS}"
	.if (. - gText_Rom_574741) > 0x4
	.error "gText_Rom_574741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574741) < 0x4
	.space 0x4 - (. - gText_Rom_574741)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:58 easy_chat_group_trainer_line_58 (+1 aliases)
	.globl gText_Rom_574745
gText_Rom_574745: @ 0x08574745
	.string "つうしん{EOS}"
	.if (. - gText_Rom_574745) > 0x5
	.error "gText_Rom_574745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574745) < 0x5
	.space 0x5 - (. - gText_Rom_574745)
	.endif
