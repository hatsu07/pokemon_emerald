	.globl gText_NoMailHere

	@ src/strings.c:453 gText_NoMailHere
	.globl gText_NoMailHere
gText_NoMailHere: @ 0x085CA976
	.string "メールは 1つうも ありません{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoMailHere) > 0x12
	.error "gText_NoMailHere may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMailHere) < 0x12
	.space 0x12 - (. - gText_NoMailHere)
	.endif

	@ src/strings.c:454 gText_WhatToDoWithVar1sMail
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WhatToDoWithVar1sMail
gText_WhatToDoWithVar1sMail: @ 0x085CA988
	.string "{STR_VAR_1} の\nメールを どうしますか?{EOS}"
	.if (. - gText_WhatToDoWithVar1sMail) != 0x12
	.error "gText_WhatToDoWithVar1sMail must retain its original byte length"
	.endif

	@ src/strings.c:455 gText_MessageWillBeLost
	.globl gText_MessageWillBeLost
gText_MessageWillBeLost: @ 0x085CA99A
	.string "ないようは きえてしまいますが\nよろしいですか?{EOS}"
	.if (. - gText_MessageWillBeLost) > 0x19
	.error "gText_MessageWillBeLost may not grow beyond its original slot"
	.endif
	.if (. - gText_MessageWillBeLost) < 0x19
	.space 0x19 - (. - gText_MessageWillBeLost)
	.endif

	@ src/strings.c:456 gText_BagIsFull
	.globl gText_BagIsFull
gText_BagIsFull: @ 0x085CA9B3
	.string "バッグが いっぱいです!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_BagIsFull) > 0xf
	.error "gText_BagIsFull may not grow beyond its original slot"
	.endif
	.if (. - gText_BagIsFull) < 0xf
	.space 0xf - (. - gText_BagIsFull)
	.endif

	@ src/strings.c:457 gText_MailToBagMessageErased
	.globl gText_MailToBagMessageErased
gText_MailToBagMessageErased: @ 0x085CA9C2
	.string "ないようを けした メールを\nバッグに いれました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_MailToBagMessageErased) > 0x1c
	.error "gText_MailToBagMessageErased may not grow beyond its original slot"
	.endif
	.if (. - gText_MailToBagMessageErased) < 0x1c
	.space 0x1c - (. - gText_MailToBagMessageErased)
	.endif
