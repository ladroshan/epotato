// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   potatoAPI/v1
// Description:
//   API for ePotato

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other PotatoAPI query classes.
 */
@interface GTLRPotatoAPIQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  GTLRPotatoAPIQuery_ChangePassword
 *
 *  Method: potatoAPI.changePassword
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_ChangePassword : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForChangePasswordWithepid:npw:opw:]

@property(nonatomic, copy, nullable) NSString *epid;

@property(nonatomic, copy, nullable) NSString *npw;

@property(nonatomic, copy, nullable) NSString *opw;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param epid NSString
 *  @param npw NSString
 *  @param opw NSString
 *
 *  @returns GTLRPotatoAPIQuery_ChangePassword
 */
+ (instancetype)queryWithEpid:(NSString *)epid
                          npw:(NSString *)npw
                          opw:(NSString *)opw;

@end

/**
 *  GTLRPotatoAPIQuery_Check
 *
 *  Method: potatoAPI.check
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Check : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForCheckWithxKind:idKey:idValue:]

@property(nonatomic, copy, nullable) NSString *xKind;

@property(nonatomic, copy, nullable) NSString *idKey;

@property(nonatomic, copy, nullable) NSString *idValue;

/**
 *  Fetches a @c GTLRPotatoAPI_Id.
 *
 *  @param xKind NSString
 *  @param idKey NSString
 *  @param idValue NSString
 *
 *  @returns GTLRPotatoAPIQuery_Check
 */
+ (instancetype)queryWithXKind:(NSString *)xKind
                         idKey:(NSString *)idKey
                       idValue:(NSString *)idValue;

@end

/**
 *  GTLRPotatoAPIQuery_CheckAll
 *
 *  Method: potatoAPI.checkAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_CheckAll : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForCheckAllWithkind:properties:values:]

@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<NSString *> *properties;

@property(nonatomic, strong, nullable) NSArray<NSString *> *values;

/**
 *  Fetches a @c GTLRPotatoAPI_IdCollection.
 *
 *  @param kind NSString
 *  @param properties NSArray<NSString *>
 *  @param values NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_CheckAll
 */
+ (instancetype)queryWithKind:(NSString *)kind
                   properties:(NSArray<NSString *> *)properties
                       values:(NSArray<NSString *> *)values;

@end

/**
 *  GTLRPotatoAPIQuery_CheckAllOne
 *
 *  Method: potatoAPI.checkAllOne
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_CheckAllOne : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForCheckAllOneWithkind:property:values:]

@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *property;

@property(nonatomic, strong, nullable) NSArray<NSString *> *values;

/**
 *  Fetches a @c GTLRPotatoAPI_IdCollection.
 *
 *  @param kind NSString
 *  @param property NSString
 *  @param values NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_CheckAllOne
 */
+ (instancetype)queryWithKind:(NSString *)kind
                     property:(NSString *)property
                       values:(NSArray<NSString *> *)values;

@end

/**
 *  GTLRPotatoAPIQuery_ContactSuggestions
 *
 *  Method: potatoAPI.contactSuggestions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_ContactSuggestions : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForContactSuggestionsWithuid:]

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param uid NSString
 *
 *  @returns GTLRPotatoAPIQuery_ContactSuggestions
 */
+ (instancetype)queryWithUid:(NSString *)uid;

@end

/**
 *  GTLRPotatoAPIQuery_DeleteAccount
 *
 *  Method: potatoAPI.deleteAccount
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_DeleteAccount : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForDeleteAccountWithepid:password:]

@property(nonatomic, copy, nullable) NSString *epid;

@property(nonatomic, copy, nullable) NSString *password;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param epid NSString
 *  @param password NSString
 *
 *  @returns GTLRPotatoAPIQuery_DeleteAccount
 */
+ (instancetype)queryWithEpid:(NSString *)epid
                     password:(NSString *)password;

@end

/**
 *  GTLRPotatoAPIQuery_DeleteContact
 *
 *  Method: potatoAPI.deleteContact
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_DeleteContact : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForDeleteContactWithuid:contactUid:]

@property(nonatomic, copy, nullable) NSString *contactUid;

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param uid NSString
 *  @param contactUid NSString
 *
 *  @returns GTLRPotatoAPIQuery_DeleteContact
 */
+ (instancetype)queryWithUid:(NSString *)uid
                  contactUid:(NSString *)contactUid;

@end

/**
 *  GTLRPotatoAPIQuery_Follow
 *
 *  Method: potatoAPI.follow
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Follow : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForFollowWithxUid:newId:]

@property(nonatomic, copy, nullable) NSString *xUid;

@property(nonatomic, copy, nullable) NSString *newId NS_RETURNS_NOT_RETAINED;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param xUid NSString
 *  @param newId NSString
 *
 *  @returns GTLRPotatoAPIQuery_Follow
 */
+ (instancetype)queryWithXUid:(NSString *)xUid
                        newId:(NSString *)newId;

@end

/**
 *  GTLRPotatoAPIQuery_FollowSuggestions
 *
 *  Method: potatoAPI.followSuggestions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_FollowSuggestions : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForFollowSuggestionsWithuid:]

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param uid NSString
 *
 *  @returns GTLRPotatoAPIQuery_FollowSuggestions
 */
+ (instancetype)queryWithUid:(NSString *)uid;

@end

/**
 *  GTLRPotatoAPIQuery_GetContacts
 *
 *  Method: potatoAPI.getContacts
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetContacts : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetContactsWithxUid:phoneNumbers:]

@property(nonatomic, copy, nullable) NSString *xUid;

@property(nonatomic, strong, nullable) NSArray<NSString *> *phoneNumbers;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param xUid NSString
 *  @param phoneNumbers NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_GetContacts
 */
+ (instancetype)queryWithXUid:(NSString *)xUid
                 phoneNumbers:(NSArray<NSString *> *)phoneNumbers;

@end

/**
 *  GTLRPotatoAPIQuery_GetFollowing
 *
 *  Method: potatoAPI.getFollowing
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetFollowing : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetFollowingWithuid:]

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param uid NSString
 *
 *  @returns GTLRPotatoAPIQuery_GetFollowing
 */
+ (instancetype)queryWithUid:(NSString *)uid;

@end

/**
 *  GTLRPotatoAPIQuery_GetPotatoes
 *
 *  Method: potatoAPI.getPotatoes
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetPotatoes : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetPotatoesWithuid:]

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_PotatoCollection.
 *
 *  @param uid NSString
 *
 *  @returns GTLRPotatoAPIQuery_GetPotatoes
 */
+ (instancetype)queryWithUid:(NSString *)uid;

@end

/**
 *  GTLRPotatoAPIQuery_GetProfile
 *
 *  Method: potatoAPI.getProfile
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetProfile : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetProfileWithidKey:idValue:]

@property(nonatomic, copy, nullable) NSString *idKey;

@property(nonatomic, copy, nullable) NSString *idValue;

/**
 *  Fetches a @c GTLRPotatoAPI_Profile.
 *
 *  @param idKey NSString
 *  @param idValue NSString
 *
 *  @returns GTLRPotatoAPIQuery_GetProfile
 */
+ (instancetype)queryWithIdKey:(NSString *)idKey
                       idValue:(NSString *)idValue;

@end

/**
 *  GTLRPotatoAPIQuery_GetProfiles
 *
 *  Method: potatoAPI.getProfiles
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetProfiles : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetProfilesWithidKey:idValue:]

@property(nonatomic, copy, nullable) NSString *idKey;

@property(nonatomic, copy, nullable) NSString *idValue;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param idKey NSString
 *  @param idValue NSString
 *
 *  @returns GTLRPotatoAPIQuery_GetProfiles
 */
+ (instancetype)queryWithIdKey:(NSString *)idKey
                       idValue:(NSString *)idValue;

@end

/**
 *  GTLRPotatoAPIQuery_GetTS
 *
 *  Method: potatoAPI.getTS
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_GetTS : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForGetTSWithxN:contacts:]

@property(nonatomic, assign) NSInteger xN;

@property(nonatomic, strong, nullable) NSArray<NSString *> *contacts;

/**
 *  Fetches a @c GTLRPotatoAPI_ProfileCollection.
 *
 *  @param xN NSInteger
 *  @param contacts NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_GetTS
 */
+ (instancetype)queryWithXN:(NSInteger)xN
                   contacts:(NSArray<NSString *> *)contacts;

@end

/**
 *  GTLRPotatoAPIQuery_Insert
 *
 *  Method: potatoAPI.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Insert : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForInsertWithkind:properties:values:]

@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<NSString *> *properties;

@property(nonatomic, strong, nullable) NSArray<NSString *> *values;

/**
 *  Fetches a @c GTLRPotatoAPI_Id.
 *
 *  @param kind NSString
 *  @param properties NSArray<NSString *>
 *  @param values NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_Insert
 */
+ (instancetype)queryWithKind:(NSString *)kind
                   properties:(NSArray<NSString *> *)properties
                       values:(NSArray<NSString *> *)values;

@end

/**
 *  GTLRPotatoAPIQuery_KevinBacon
 *
 *  Method: potatoAPI.kevinBacon
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_KevinBacon : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForKevinBacon]

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @returns GTLRPotatoAPIQuery_KevinBacon
 */
+ (instancetype)query;

@end

/**
 *  GTLRPotatoAPIQuery_Login
 *
 *  Method: potatoAPI.login
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Login : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForLoginWithepid:password:]

@property(nonatomic, copy, nullable) NSString *epid;

@property(nonatomic, copy, nullable) NSString *password;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param epid NSString
 *  @param password NSString
 *
 *  @returns GTLRPotatoAPIQuery_Login
 */
+ (instancetype)queryWithEpid:(NSString *)epid
                     password:(NSString *)password;

@end

/**
 *  GTLRPotatoAPIQuery_NewContact
 *
 *  Method: potatoAPI.newContact
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_NewContact : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForNewContactWithuid:contactUid:]

@property(nonatomic, copy, nullable) NSString *contactUid;

@property(nonatomic, copy, nullable) NSString *uid;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param uid NSString
 *  @param contactUid NSString
 *
 *  @returns GTLRPotatoAPIQuery_NewContact
 */
+ (instancetype)queryWithUid:(NSString *)uid
                  contactUid:(NSString *)contactUid;

@end

/**
 *  GTLRPotatoAPIQuery_RecoverPassword
 *
 *  Method: potatoAPI.recoverPassword
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_RecoverPassword : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForRecoverPasswordWithepid:]

@property(nonatomic, copy, nullable) NSString *epid;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param epid NSString
 *
 *  @returns GTLRPotatoAPIQuery_RecoverPassword
 */
+ (instancetype)queryWithEpid:(NSString *)epid;

@end

/**
 *  GTLRPotatoAPIQuery_SendFCM
 *
 *  Method: potatoAPI.sendFCM
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_SendFCM : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForSendFCMWithnewPotato:uids:x:y:]

@property(nonatomic, assign) BOOL newPotato;

@property(nonatomic, strong, nullable) NSArray<NSString *> *uids;

@property(nonatomic, strong, nullable) NSArray<NSString *> *x;

@property(nonatomic, strong, nullable) NSArray<NSString *> *y;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param newPotato BOOL
 *  @param uids NSArray<NSString *>
 *  @param x NSArray<NSString *>
 *  @param y NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_SendFCM
 */
+ (instancetype)queryWithNewPotato:(BOOL)newPotato
                              uids:(NSArray<NSString *> *)uids
                                 x:(NSArray<NSString *> *)x
                                 y:(NSArray<NSString *> *)y;

@end

/**
 *  GTLRPotatoAPIQuery_SendPotato
 *
 *  Method: potatoAPI.sendPotato
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_SendPotato : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForSendPotatoWithxAddresseesUids:addresseesTs:addressor:form:message:pid:]

@property(nonatomic, strong, nullable) NSArray<NSString *> *xAddresseesUids;

/**
 *  addresseesTs
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *addresseesTs;

@property(nonatomic, copy, nullable) NSString *addressor;

@property(nonatomic, assign) NSInteger form;

@property(nonatomic, copy, nullable) NSString *message;

@property(nonatomic, copy, nullable) NSString *pid;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param xAddresseesUids NSArray<NSString *>
 *  @param addresseesTs NSArray<NSNumber *>
 *  @param addressor NSString
 *  @param form NSInteger
 *  @param message NSString
 *  @param pid NSString
 *
 *  @returns GTLRPotatoAPIQuery_SendPotato
 */
+ (instancetype)queryWithXAddresseesUids:(NSArray<NSString *> *)xAddresseesUids
                            addresseesTs:(NSArray<NSNumber *> *)addresseesTs
                               addressor:(NSString *)addressor
                                    form:(NSInteger)form
                                 message:(NSString *)message
                                     pid:(NSString *)pid;

@end

/**
 *  GTLRPotatoAPIQuery_Serialize
 *
 *  Method: potatoAPI.serialize
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Serialize : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForSerializeWithinput:]

@property(nonatomic, strong, nullable) NSArray<NSString *> *input;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param input NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_Serialize
 */
+ (instancetype)queryWithInput:(NSArray<NSString *> *)input;

@end

/**
 *  GTLRPotatoAPIQuery_Signup
 *
 *  Method: potatoAPI.signup
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Signup : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForSignupWithepid:password:phone:]

@property(nonatomic, copy, nullable) NSString *epid;

@property(nonatomic, copy, nullable) NSString *password;

@property(nonatomic, copy, nullable) NSString *phone;

/**
 *  Fetches a @c GTLRPotatoAPI_Id.
 *
 *  @param epid NSString
 *  @param password NSString
 *  @param phone NSString
 *
 *  @returns GTLRPotatoAPIQuery_Signup
 */
+ (instancetype)queryWithEpid:(NSString *)epid
                     password:(NSString *)password
                        phone:(NSString *)phone;

@end

/**
 *  GTLRPotatoAPIQuery_Sms
 *
 *  Method: potatoAPI.sms
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Sms : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForSmsWithnumber:body:]

@property(nonatomic, copy, nullable) NSString *body;

@property(nonatomic, copy, nullable) NSString *number;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param number NSString
 *  @param body NSString
 *
 *  @returns GTLRPotatoAPIQuery_Sms
 */
+ (instancetype)queryWithNumber:(NSString *)number
                           body:(NSString *)body;

@end

/**
 *  GTLRPotatoAPIQuery_Test
 *
 *  Method: potatoAPI.test
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Test : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForTest]

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @returns GTLRPotatoAPIQuery_Test
 */
+ (instancetype)query;

@end

/**
 *  GTLRPotatoAPIQuery_Unfollow
 *
 *  Method: potatoAPI.unfollow
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Unfollow : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForUnfollowWithxUid:oldId:]

@property(nonatomic, copy, nullable) NSString *xUid;

@property(nonatomic, copy, nullable) NSString *oldId;

/**
 *  Fetches a @c GTLRPotatoAPI_Notice.
 *
 *  @param xUid NSString
 *  @param oldId NSString
 *
 *  @returns GTLRPotatoAPIQuery_Unfollow
 */
+ (instancetype)queryWithXUid:(NSString *)xUid
                        oldId:(NSString *)oldId;

@end

/**
 *  GTLRPotatoAPIQuery_Update
 *
 *  Method: potatoAPI.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePotatoAPIUserinfoEmail
 */
@interface GTLRPotatoAPIQuery_Update : GTLRPotatoAPIQuery
// Previous library name was
//   +[GTLQueryPotatoAPI queryForUpdateWithxKind:idKey:idValue:properties:values:]

@property(nonatomic, copy, nullable) NSString *xKind;

@property(nonatomic, copy, nullable) NSString *idKey;

@property(nonatomic, copy, nullable) NSString *idValue;

@property(nonatomic, strong, nullable) NSArray<NSString *> *properties;

@property(nonatomic, strong, nullable) NSArray<NSString *> *values;

/**
 *  Fetches a @c GTLRPotatoAPI_Id.
 *
 *  @param xKind NSString
 *  @param idKey NSString
 *  @param idValue NSString
 *  @param properties NSArray<NSString *>
 *  @param values NSArray<NSString *>
 *
 *  @returns GTLRPotatoAPIQuery_Update
 */
+ (instancetype)queryWithXKind:(NSString *)xKind
                         idKey:(NSString *)idKey
                       idValue:(NSString *)idValue
                    properties:(NSArray<NSString *> *)properties
                        values:(NSArray<NSString *> *)values;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
