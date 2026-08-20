	@ src/data/easy_chat/easy_chat_group_adjectives.h:196 easy_chat_group_adjectives_line_196
	.globl gText_Rom_57825A
gText_Rom_57825A: @ 0x0857825A
	.string "メラメラ{EOS}"
	.if (. - gText_Rom_57825A) > 0x5
	.error "gText_Rom_57825A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825A) < 0x5
	.space 0x5 - (. - gText_Rom_57825A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:202 easy_chat_group_adjectives_line_202
	.globl gText_Rom_57825F
gText_Rom_57825F: @ 0x0857825F
	.string "ラブラブ{EOS}"
	.if (. - gText_Rom_57825F) > 0x5
	.error "gText_Rom_57825F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825F) < 0x5
	.space 0x5 - (. - gText_Rom_57825F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:208 easy_chat_group_adjectives_line_208
	.globl gText_Rom_578264
gText_Rom_578264: @ 0x08578264
	.string "るんるん{EOS}"
	.if (. - gText_Rom_578264) > 0x5
	.error "gText_Rom_578264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578264) < 0x5
	.space 0x5 - (. - gText_Rom_578264)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:214 easy_chat_group_adjectives_line_214
	.globl gText_Rom_578269
gText_Rom_578269: @ 0x08578269
	.string "わくわく{EOS}"
	.if (. - gText_Rom_578269) > 0x5
	.error "gText_Rom_578269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578269) < 0x5
	.space 0x5 - (. - gText_Rom_578269)
	.endif
	@ analyzed canonical ROM range 0x0857826E-0x0857841F
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x2 bytes
	.byte 0x00, 0x00
	.globl gEasyChatGroup_Adjectives
gEasyChatGroup_Adjectives: @ 0x08578270
	easy_chat_word_info gText_Rom_5781B4, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_5781B9, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_5781BE, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_5781C3, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_5781C8, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_5781CF, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_5781D4, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_5781D9, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_5781DE, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_5781E3, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_5781E8, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_5781ED, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_5781F2, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_5781F7, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_5781FC, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_578201, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_578206, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57820B, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_578210, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_578215, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_57821A, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_57821F, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_578224, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_578229, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_57822E, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_578235, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_57823A, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_57823F, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_578244, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_578249, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_57824E, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_578253, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_57825A, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_57825F, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_578264, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_578269, 35, 1 @ word 35
