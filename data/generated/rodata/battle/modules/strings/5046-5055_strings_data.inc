	@ src/strings.c:453 gText_NoMailHere
	.globl gText_Rom_5CA976
gText_Rom_5CA976: @ 0x085CA976
	.string "メールは 1つうも ありません{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA976) > 0x12
	.error "gText_Rom_5CA976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA976) < 0x12
	.space 0x12 - (. - gText_Rom_5CA976)
	.endif

	@ src/strings.c:454 gText_WhatToDoWithVar1sMail
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA988
gText_Rom_5CA988: @ 0x085CA988
	.string "{STR_VAR_1} の\nメールを どうしますか?{EOS}"
	.if (. - gText_Rom_5CA988) != 0x12
	.error "gText_Rom_5CA988 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA98D
	.set gText_Rom_5CA98D, gText_Rom_5CA988 + 0x5

	@ src/strings.c:455 gText_MessageWillBeLost
	.globl gText_Rom_5CA99A
gText_Rom_5CA99A: @ 0x085CA99A
	.string "ないようは きえてしまいますが\nよろしいですか?{EOS}"
	.if (. - gText_Rom_5CA99A) > 0x19
	.error "gText_Rom_5CA99A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA99A) < 0x19
	.space 0x19 - (. - gText_Rom_5CA99A)
	.endif

	@ src/strings.c:456 gText_BagIsFull
	.globl gText_Rom_5CA9B3
gText_Rom_5CA9B3: @ 0x085CA9B3
	.string "バッグが いっぱいです!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA9B3) > 0xf
	.error "gText_Rom_5CA9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9B3) < 0xf
	.space 0xf - (. - gText_Rom_5CA9B3)
	.endif

	@ src/strings.c:457 gText_MailToBagMessageErased
	.globl gText_Rom_5CA9C2
gText_Rom_5CA9C2: @ 0x085CA9C2
	.string "ないようを けした メールを\nバッグに いれました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA9C2) > 0x1c
	.error "gText_Rom_5CA9C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9C2) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA9C2)
	.endif
