
	@ src/data/easy_chat/easy_chat_group_feelings.h:64 gEasyChatWord_Beat (+1 aliases)
	.globl gText_Rom_57692E
gText_Rom_57692E: @ 0x0857692E
	.string "やられて{EOS}"
	.if (. - gText_Rom_57692E) > 0x5
	.error "gText_Rom_57692E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57692E) < 0x5
	.space 0x5 - (. - gText_Rom_57692E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:65 gEasyChatWord_Great (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576933
gText_Rom_576933: @ 0x08576933
	.string "よかった{EOS}"
	.if (. - gText_Rom_576933) != 0x5
	.error "gText_Rom_576933 must retain its original byte length"
	.endif
	.globl gText_Rom_576934
	.set gText_Rom_576934, gText_Rom_576933 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:66 gEasyChatWord_Romantic (+1 aliases)
	.globl gText_Rom_576938
gText_Rom_576938: @ 0x08576938
	.string "ロマン{EOS}"
	.if (. - gText_Rom_576938) > 0x4
	.error "gText_Rom_576938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576938) < 0x4
	.space 0x4 - (. - gText_Rom_576938)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:67 gEasyChatWord_Question (+1 aliases)
	.globl gText_Rom_57693C
gText_Rom_57693C: @ 0x0857693C
	.string "ろんがい{EOS}"
	.if (. - gText_Rom_57693C) > 0x5
	.error "gText_Rom_57693C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57693C) < 0x5
	.space 0x5 - (. - gText_Rom_57693C)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:68 gEasyChatWord_Understand (+1 aliases)
	.globl gText_Rom_576941
gText_Rom_576941: @ 0x08576941
	.string "わから{EOS}"
	.if (. - gText_Rom_576941) > 0x4
	.error "gText_Rom_576941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576941) < 0x4
	.space 0x4 - (. - gText_Rom_576941)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:69 gEasyChatWord_Understands (+1 aliases)
	.globl gText_Rom_576945
gText_Rom_576945: @ 0x08576945
	.string "わかり{EOS}"
	.if (. - gText_Rom_576945) > 0x4
	.error "gText_Rom_576945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576945) < 0x4
	.space 0x4 - (. - gText_Rom_576945)
	.endif
	@ analyzed canonical ROM range 0x08576949-0x08576C87
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x3 bytes
	.byte 0x00, 0x00, 0x00
	.globl gEasyChatGroup_Feelings
gEasyChatGroup_Feelings: @ 0x0857694C
	easy_chat_word_info gEasyChatWord_Meet, 0, 1 @ word 0
	easy_chat_word_info gEasyChatWord_Play, 1, 1 @ word 1
	easy_chat_word_info gEasyChatWord_Hurried, 2, 1 @ word 2
	easy_chat_word_info gEasyChatWord_Goes, 3, 1 @ word 3
	easy_chat_word_info gEasyChatWord_Giddy, 4, 1 @ word 4
	easy_chat_word_info gEasyChatWord_Happy, 5, 1 @ word 5
	easy_chat_word_info gEasyChatWord_Happiness, 6, 1 @ word 6
	easy_chat_word_info gEasyChatWord_Excite, 7, 1 @ word 7
	easy_chat_word_info gEasyChatWord_Important, 8, 1 @ word 8
	easy_chat_word_info gEasyChatWord_Funny, 9, 1 @ word 9
	easy_chat_word_info gEasyChatWord_Got, 10, 1 @ word 10
	easy_chat_word_info gEasyChatWord_GoHome, 11, 1 @ word 11
	easy_chat_word_info gEasyChatWord_Disappointed, 12, 1 @ word 12
	easy_chat_word_info gEasyChatWord_Disappoints, 13, 1 @ word 13
	easy_chat_word_info gEasyChatWord_Sad, 14, 1 @ word 14
	easy_chat_word_info gEasyChatWord_Try, 15, 1 @ word 15
	easy_chat_word_info gEasyChatWord_Tries, 16, 1 @ word 16
	easy_chat_word_info gEasyChatWord_Hears, 17, 1 @ word 17
	easy_chat_word_info gEasyChatWord_Think, 18, 1 @ word 18
	easy_chat_word_info gEasyChatWord_Hear, 19, 1 @ word 19
	easy_chat_word_info gEasyChatWord_Wants, 20, 1 @ word 20
	easy_chat_word_info gEasyChatWord_Misheard, 21, 1 @ word 21
	easy_chat_word_info gEasyChatWord_Dislike, 22, 1 @ word 22
	easy_chat_word_info gEasyChatWord_Angry, 23, 1 @ word 23
	easy_chat_word_info gEasyChatWord_Anger, 24, 1 @ word 24
	easy_chat_word_info gEasyChatWord_Scary, 25, 1 @ word 25
	easy_chat_word_info gEasyChatWord_Lonesome, 26, 1 @ word 26
	easy_chat_word_info gEasyChatWord_Disappoint, 27, 1 @ word 27
	easy_chat_word_info gEasyChatWord_Joy, 28, 1 @ word 28
	easy_chat_word_info gEasyChatWord_Gets, 29, 1 @ word 29
	easy_chat_word_info gEasyChatWord_Never, 30, 1 @ word 30
	easy_chat_word_info gEasyChatWord_Darn, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_576892, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_576898, 33, 1 @ word 33
	easy_chat_word_info 0x085768A0, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_5768A3, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_5768A9, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_5768AE, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_5768B2, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_5768B7, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_5768BE, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_5768C3, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_5768C8, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_5768CD, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_5768D3, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_5768D8, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_5768DD, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_5768E3, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_5768E7, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_5768ED, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_5768F3, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_5768F7, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_5768FC, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_576901, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_576905, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_576909, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_57690E, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_576913, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_576917, 58, 1 @ word 58
	easy_chat_word_info 0x0857691D, 59, 1 @ word 59
	easy_chat_word_info gText_Rom_576920, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_576925, 61, 1 @ word 61
	easy_chat_word_info gText_Rom_576929, 62, 1 @ word 62
	easy_chat_word_info gText_Rom_57692E, 63, 1 @ word 63
	easy_chat_word_info gText_Rom_576933, 64, 1 @ word 64
	easy_chat_word_info gText_Rom_576938, 65, 1 @ word 65
	easy_chat_word_info gText_Rom_57693C, 66, 1 @ word 66
	easy_chat_word_info gText_Rom_576941, 67, 1 @ word 67
	easy_chat_word_info gText_Rom_576945, 68, 1 @ word 68
