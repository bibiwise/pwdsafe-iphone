/**
 * Definition of string table map
 * Derived from ../src/core/core.rc2
 * Generated by ../Misc/rc2cpp.pl
 *
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT.
 * Changes made to this file will be lost when the
 * file is regenerated.
 *
 * Note: The contents of this file is not needed for MFC builds but
 * it does not seem possible to conditionally exclude it from these.
 *
 */

#if !defined(_WIN32) || defined(__WX__)

#define _(x) L ## x
#include "./core_st.h"
#include <utility>
#include "../corelib/core.h"


using namespace std;

namespace {
  pair<int, const TCHAR *> Pairs[] = {
    make_pair(IDCS_VALIDATE_NOTSET, _("<Not Set>")),
    make_pair(IDCS_XERCESEXCEPTION, _("\nUnexpected exception during parsing.")),
    make_pair(IDCS_XERCESOUTOFMEMORY, _("OutOfMemoryException.")),
    make_pair(IDSC_AFTER, _("after")),
    make_pair(IDSC_ALIAS, _("alias")),
    make_pair(IDSC_ALIASES, _("aliases")),
    make_pair(IDSC_AND, _("And")),
    make_pair(IDSC_AUTOTYPE, _("autotype:")),
    make_pair(IDSC_BADPASSWORD, _("Incorrect password")),
    make_pair(IDSC_BEFORE, _("before")),
    make_pair(IDSC_BEGINSWITH, _("begins with")),
    make_pair(IDSC_BETWEEN, _("between")),
    make_pair(IDSC_CANTCREATEXMLCFG, _("Unable to create a new XML configuration file or add your settings to an existing XML configuration file.\n\nAll application configuration settings will be saved in your registry entry on this computer.\n\nDatabase related settings will be stored in the open database when it is closed, assuming it is not read-only or locked by another user.")),
    make_pair(IDSC_CANTDETERMINECFG, _("Error - unable to determine settings configuration!\n\nNo application settings will be saved.\n\nDatabase related settings will be stored in the open database when it is closed, assuming it is not read-only or locked by another user.")),
    make_pair(IDSC_CANTPROCESSDBFILTERS, _("Trouble reading stored filters (version mismatch?). Filters will be unusable.")),
    make_pair(IDSC_CANTREADLOCKER, _("Unable to read locker?")),
    make_pair(IDSC_CANTUPDATEXMLCFG, _("Unable to update your entries in the existing XML configuration file.\n\nAll application configuration settings will be loaded from this file but no changes will be saved.\n\nDatabase related settings will be stored in the open database when it is closed, assuming it is not read-only or locked by another user.")),
    make_pair(IDSC_CANTUSECONFIGFILE, _("%ls\n\nThe configuration file will not be used.")),
    make_pair(IDSC_CANTVALIDATEXML, _("Missing XSD File")),
    make_pair(IDSC_CANTXMLVALIDATE, _("Unable to validate a XML file using a XML Schema (XSD) on your system.")),
    make_pair(IDSC_CASE_INSENSITIVE, _("(case insensitive)")),
    make_pair(IDSC_CASE_SENSITIVE, _("(case sensitive)")),
    make_pair(IDSC_CONFIG_FILE_RO, _("C:F[R-O]")),
    make_pair(IDSC_CONFIG_FILE_RW, _("C:F[R/W]")),
    make_pair(IDSC_CONFIG_NONE, _("C:None  ")),
    make_pair(IDSC_CONFIG_REGISTRY, _("C:Reg   ")),
    make_pair(IDSC_CONFLICT, _("conflict")),
    make_pair(IDSC_CONFLICTS, _("conflicts")),
    make_pair(IDSC_CONTAINS, _("contains")),
    make_pair(IDSC_CONTAINSALL, _("contains all of")),
    make_pair(IDSC_CONTAINSANY, _("contains any of")),
    make_pair(IDSC_COPIED, _("copied")),
    make_pair(IDSC_COPYPOLICY, _("%ls - Copied %ls")),
    make_pair(IDSC_CURRENTDEFAULTDCA, _(" Current default (%ls)")),
    make_pair(IDSC_DCAAUTOTYPE, _("Autotype")),
    make_pair(IDSC_DCABROWSE, _("Browse to URL")),
    make_pair(IDSC_DCABROWSEPLUS, _("Browse to URL + Autotype")),
    make_pair(IDSC_DCACOPYNOTES, _("Copy notes to clipboard")),
    make_pair(IDSC_DCACOPYPASSWORD, _("Copy password to clipboard")),
    make_pair(IDSC_DCACOPYPASSWORDMIN, _("Copy password to clipboard, minimize")),
    make_pair(IDSC_DCACOPYUSERNAME, _("Copy username to clipboard")),
    make_pair(IDSC_DCARUN, _("Run Command")),
    make_pair(IDSC_DCASENDEMAIL, _("Send Email")),
    make_pair(IDSC_DCAVIEWEDIT, _("View/Edit selected entry")),
    make_pair(IDSC_DEFAULT, _(" (application default)")),
    make_pair(IDSC_DEFAULTSYMBOLS, _("default symbol set")),
    make_pair(IDSC_DEFAULT_POLICY, _("Default Policy")),
    make_pair(IDSC_DELETEABASE, _("This entry has the following %d %ls:\n%ls\nPlease confirm to continue (alias entry's passwords will be replaced by this entry's password)?")),
    make_pair(IDSC_DELETEBASET, _("Delete Base Entry Confirmation")),
    make_pair(IDSC_DELETESBASE, _("This entry has the following %d %ls:\n%ls\nPlease confirm to continue (All shortcuts to this entry will be deleted)?")),
    make_pair(IDSC_DOESNOTBEGINSWITH, _("does not begin with")),
    make_pair(IDSC_DOESNOTCONTAIN, _("does not contain")),
    make_pair(IDSC_DOESNOTCONTAINALL, _("does not contain all of")),
    make_pair(IDSC_DOESNOTCONTAINANY, _("does not contain any of")),
    make_pair(IDSC_DOESNOTENDWITH, _("does not end with")),
    make_pair(IDSC_DOESNOTEQUAL, _("does not equal")),
    make_pair(IDSC_DUPLICATENUMBER, _(" Duplicate # %d")),
    make_pair(IDSC_EMPTYGROUP, _("empty group")),
    make_pair(IDSC_EMPTYGROUPS, _("empty groups")),
    make_pair(IDSC_ENCODING_PROBLEM, _("Trouble with a non-textual (e.g., time) field in record '%ls' - please check data carefully.")),
    make_pair(IDSC_ENDSWITH, _("ends with")),
    make_pair(IDSC_END_REPORT1, _("End Report")),
    make_pair(IDSC_END_REPORT2, _("--------------------------------------------------------------------------------")),
    make_pair(IDSC_ENTRIES, _("entries")),
    make_pair(IDSC_ENTRIES_POLICIES, _("The following entries had a policy name that already existed in this database but with different settings.\nA new named policy has been created with the current date/time (%ls) appended:%ls")),
    make_pair(IDSC_ENTRY, _("entry")),
    make_pair(IDSC_EQUALS, _("equals")),
    make_pair(IDSC_EXPIRED, _("has expired")),
    make_pair(IDSC_EXPIREPASSWORDS, _("Entries with a password expiry")),
    make_pair(IDSC_EXPIRE_IN_DAYS, _("within %d day(s)")),
    make_pair(IDSC_EXPORTDESCRIPTION, _("DB Export from database: '%s'")),
    make_pair(IDSC_EXS_FIRSTNOTALPHA, _("First character of variable name must be alphabetic")),
    make_pair(IDSC_EXS_INDEXNOTNUMERIC, _("Index not numeric")),
    make_pair(IDSC_EXS_INPUTEMPTY, _("Input string is empty")),
    make_pair(IDSC_EXS_INVALIDBRACKETS, _("Characters present between end of index ']' and '}'")),
    make_pair(IDSC_EXS_INVALIDINDEX, _("Index is invalid or missing")),
    make_pair(IDSC_EXS_MISSINGCURLYBKT, _("Missing ending curly bracket for variable name")),
    make_pair(IDSC_EXS_MISSINGROUNDBKT, _("Missing ending round bracket for Autotype value")),
    make_pair(IDSC_EXS_MISSINGSQUAREBKT, _("Missing ending square bracket for index value")),
    make_pair(IDSC_EXS_UNMATCHEDQUOTES, _("There are unmatched quotes in the run command")),
    make_pair(IDSC_EXS_VARNAMEEMPTY, _("Variable name is empty")),
    make_pair(IDSC_EXS_VARNAMEINVALID, _("Variable name must be alphanumeric")),
    make_pair(IDSC_FALIAS, _("an alias entry")),
    make_pair(IDSC_FALIASBASE, _("a base entry of an alias")),
    make_pair(IDSC_FIELDTOOLONG, _("  Field is too long.")),
    make_pair(IDSC_FIELDTOOSHORT, _("  Field is too short.")),
    make_pair(IDSC_FILEEXISTS, _("Error: A file with this name already exists")),
    make_pair(IDSC_FILEPATHNOTFOUND, _("The file was not found.")),
    make_pair(IDSC_FILEREADONLY, _("Error: File is read-only")),
    make_pair(IDSC_FILEWRITEERROR, _("Error while writing file! Try saving in a different location")),
    make_pair(IDSC_FILE_TOO_BIG, _("File is too big.")),
    make_pair(IDSC_FILE_TOO_SHORT, _("File is too short.")),
    make_pair(IDSC_FILE_TRUNCATED, _("File is truncated or otherwise corrupt. Please use backup database.")),
    make_pair(IDSC_FILE_UNREADABLE, _("Cannot read file. Please check file permissions.")),
    make_pair(IDSC_FILTEREXISTS, _("Filter %ls already exists in the database, do you wish to replace it with this?")),
    make_pair(IDSC_FILTERSEXPORTEDTODB, _("Current database filters have been exported to this database.")),
    make_pair(IDSC_FILTERSKEPT, _("Stored filters will be unusable until the file's restored.")),
    make_pair(IDSC_FLDNMATIME, _("Last Access Time")),
    make_pair(IDSC_FLDNMAUTOTYPE, _("AutoType")),
    make_pair(IDSC_FLDNMCTIME, _("Created Time")),
    make_pair(IDSC_FLDNMDCA, _("DCA")),
    make_pair(IDSC_FLDNMEMAIL, _("e-mail")),
    make_pair(IDSC_FLDNMGROUP, _("Group")),
    make_pair(IDSC_FLDNMGROUPTITLE, _("Group/Title")),
    make_pair(IDSC_FLDNMKBSHORTCUT, _("Keyboard Shortcut")),
    make_pair(IDSC_FLDNMNOTES, _("Notes")),
    make_pair(IDSC_FLDNMPASSWORD, _("Password")),
    make_pair(IDSC_FLDNMPMTIME, _("Password Modified Time")),
    make_pair(IDSC_FLDNMPROTECTED, _("Protected")),
    make_pair(IDSC_FLDNMPWHISTORY, _("History")),
    make_pair(IDSC_FLDNMPWPOLICY, _("Password Policy")),
    make_pair(IDSC_FLDNMPWPOLICYNAME, _("Password Policy Name")),
    make_pair(IDSC_FLDNMRMTIME, _("Record Modified Time")),
    make_pair(IDSC_FLDNMRUNCOMMAND, _("Run Command")),
    make_pair(IDSC_FLDNMSHIFTDCA, _("Shift+DCA")),
    make_pair(IDSC_FLDNMSYMBOLS, _("Symbols")),
    make_pair(IDSC_FLDNMTITLE, _("Title")),
    make_pair(IDSC_FLDNMURL, _("URL")),
    make_pair(IDSC_FLDNMUSERNAME, _("Username")),
    make_pair(IDSC_FLDNMUUID, _("UUID")),
    make_pair(IDSC_FLDNMXTIME, _("Password Expiry Date")),
    make_pair(IDSC_FLDNMXTIMEINT, _("Password Expiry Interval")),
    make_pair(IDSC_FNORMAL, _("a normal entry")),
    make_pair(IDSC_FOUNDENTRIESFILTER, _("Last found entries")),
    make_pair(IDSC_FSADDED, _("added but not yet saved to database")),
    make_pair(IDSC_FSCLEAN, _("in the database")),
    make_pair(IDSC_FSHORTCUT, _("a shortcut entry")),
    make_pair(IDSC_FSHORTCUTBASE, _("a base entry of a shortcut")),
    make_pair(IDSC_FSMODIFIED, _("changed but not yet saved to database")),
    make_pair(IDSC_GREATERTHAN, _("greater than")),
    make_pair(IDSC_GREATERTHANEQUAL, _("greater than or equal to")),
    make_pair(IDSC_IMPINVALIDINPUT, _("Invalid input on line %d.  Number of fields separated by '%c' is not as expected.")),
    make_pair(IDSC_IMPINVALIDPWH, _("Line %d: ")),
    make_pair(IDSC_IMPMISSINGQUOTE, _("File ends on line %d before ending double quote of last entry's note field.")),
    make_pair(IDSC_IMPORTABORTED, _("Import aborted. Please see report.")),
    make_pair(IDSC_IMPORTBADFORMAT, _("The TXT or CSV file was not exported as required as entry records span multiple lines in the CSV file.\n\nImport aborted.")),
    make_pair(IDSC_IMPORTCONFLICTS0, _("%ls, Title=\"%ls\", User=\"%ls\" already exists in your database or in the Import file. Added imported entry with title=\"%ls\".\n")),
    make_pair(IDSC_IMPORTCONFLICTS1, _("Entry on line %d with Group=\"%ls\"")),
    make_pair(IDSC_IMPORTCONFLICTS2, _("Entry on line %d with no group")),
    make_pair(IDSC_IMPORTCONFLICTSX1, _("Entry with Group=\"%ls\"")),
    make_pair(IDSC_IMPORTCONFLICTSX2, _("Entry with no group")),
    make_pair(IDSC_IMPORTED, _("imported")),
    make_pair(IDSC_IMPORTEDEMPTYGROUPS, _("including %d empty group(s).")),
    make_pair(IDSC_IMPORTEMPTYLINESKIPPED, _("Empty line %d skipped")),
    make_pair(IDSC_IMPORTENTRY, _("Entry %ls%d with Group=\"%ls\", Title=\"%ls\", User=\"%ls\"")),
    make_pair(IDSC_IMPORTFAILURE, _("Internal error. Import failed. No records imported.")),
    make_pair(IDSC_IMPORTHDR, _("Found %d known column headers:")),
    make_pair(IDSC_IMPORTINVALIDFIELD, _("Entry of line %d has an invalid \"%ls\" field. It has been ignored.")),
    make_pair(IDSC_IMPORTKNOWNHDRS, _("The following columns will be processed: ")),
    make_pair(IDSC_IMPORTKNOWNHDRS2, _("The following columns were recognised but only Group/Title, Username and Password will be processed:")),
    make_pair(IDSC_IMPORTLINESKIPPED, _("Line %d skipped - Only %d fields found, whereas parsing the Header says there should be %d.")),
    make_pair(IDSC_IMPORTMISSINGCOLS, _("Either or both of the Group/Title and Password columns are missing. No records imported.")),
    make_pair(IDSC_IMPORTMISSINGTITLE, _("Could not find the next entry's title field in the KeePass V1 TXT (should be within square brackets).")),
    make_pair(IDSC_IMPORTNOCOLS, _("Column header row not recognised as first record. No records imported.")),
    make_pair(IDSC_IMPORTNOHEADER, _("No records in import file!")),
    make_pair(IDSC_IMPORTNOPASSWORD, _("Line %d skipped: Empty mandatory Password field.")),
    make_pair(IDSC_IMPORTNOTITLE, _("Line %d skipped: Empty mandatory Title field.")),
    make_pair(IDSC_IMPORTNUMBER, _(" Import # %d")),
    make_pair(IDSC_IMPORTPOLICY, _("%ls - Imported %ls")),
    make_pair(IDSC_IMPORTPSWDNOCOLS, _("To replace passwords of existing entries, all the following columns must be present: Group/Title, Username and Password.  One or more are missing and no entries have been updated.")),
    make_pair(IDSC_IMPORTRECNOTFOUND, _("%ls not found. Cannot update entry's password.\n")),
    make_pair(IDSC_IMPORTRECSKIPPED, _("%ls has an empty %ls.\n")),
    make_pair(IDSC_IMPORTWARNING1, _("Entry \"%ls, %ls, %ls\" has a password in the correct form for an alias, but the base entry is already an alias.")),
    make_pair(IDSC_IMPORTWARNING1A, _("\tThis entry has been made an alias of associated base entry.")),
    make_pair(IDSC_IMPORTWARNING2, _("Entry \"%ls, %ls, %ls\" has a password in the correct form for an alias, but the base entry does not exist.")),
    make_pair(IDSC_IMPORTWARNING2A, _("\tThis entry remains a normal entry and the password has not been changed.")),
    make_pair(IDSC_IMPORTWARNING3, _("The %ls entry \"%ls, %ls, %ls\" doesn't point to a normal or existing %ls base entry. It cannot be imported.")),
    make_pair(IDSC_IMPORTWARNINGHDR, _("Entry import warnings")),
    make_pair(IDSC_IMPORT_ENTRY_ID, _("id=")),
    make_pair(IDSC_IMPORT_ON_LINE, _("on line ")),
    make_pair(IDSC_INTERNALLOCKERROR, _("Internal error: Invalid oflag or pmode argument")),
    make_pair(IDSC_INVALID, _("invalid!")),
    make_pair(IDSC_INVALIDDATETIME, _("  Invalid date/time value.")),
    make_pair(IDSC_INVALIDFIELDLENGTH, _("  Field length is incorrect.")),
    make_pair(IDSC_INVALIDFLAG, _("Internal error: An invalid flag was specified")),
    make_pair(IDSC_INVALIDHEADER, _("  Invalid header: '%ls' (must be 5 hexadecimal characters).")),
    make_pair(IDSC_INVALIDNUMOLDPW, _("  Invalid number of saved old passwords %d.")),
    make_pair(IDSC_INVALIDPWHSTATUS, _("  Invalid status value: %d (must be either 0 or 1).")),
    make_pair(IDSC_INVALIDPWLENGTH, _("  Invalid password length found (not a hexadecimal number).")),
    make_pair(IDSC_INVALIDPWLENGTHX, _("  Invalid password length found (differs from length of following password).")),
    make_pair(IDSC_INVALIDSEPARATER, _("  Invalid field separator character found - only a single blank is allowed between fields.")),
    make_pair(IDSC_INVALID_SCHEMA, _("Invalid Filter schema.")),
    make_pair(IDSC_INVALID_SCHEMA_VER, _("Schema does not have a version number.")),
    make_pair(IDSC_INVALID_XML_VER1, _("The filter XML version (%d) is greater than the current schema (%d).")),
    make_pair(IDSC_INVALID_XML_VER2, _("The filter XML version (%d) is greater than that supported by this instance of PasswordSafe (%d).")),
    make_pair(IDSC_IS, _("is")),
    make_pair(IDSC_ISACTIVE, _("is active")),
    make_pair(IDSC_ISINACTIVE, _("is inactive")),
    make_pair(IDSC_ISNOT, _("is not")),
    make_pair(IDSC_ISNOTPRESENT, _("is not present")),
    make_pair(IDSC_ISPRESENT, _("is present")),
    make_pair(IDSC_KBSHORTCUT_REMOVED, _("Entry keyboard shortcut %ls entry %ls is already allocated to entry %ls. It has been removed from the %ls entry.")),
    make_pair(IDSC_KBSHORTCUT_USEBYAPP, _("Entry keyboard shortcut %ls entry %ls is already allocated to the PasswordSafe application. It has been removed from the entry.")),
    make_pair(IDSC_LESSTHAN, _("less than")),
    make_pair(IDSC_LESSTHANEQUAL, _("less than or equal to")),
    make_pair(IDSC_LOCKFILEPATHNF, _("File or path not found")),
    make_pair(IDSC_MERGEADDED, _("\nThe following new %ls %ls merged into this database:")),
    make_pair(IDSC_MERGECOMPLETED, _("\nMerge completed: %d %ls added (%d %ls, %d %ls, %d %ls, %d %ls)")),
    make_pair(IDSC_MERGECONFLICTS, _("Conflicting entries for \"%ls\" \"%ls\" \"%ls\".\n  Adding merged entry as \"%ls\" \"%ls\" \"%ls\".\n    Differing field(s): %ls")),
    make_pair(IDSC_MERGED, _("merged")),
    make_pair(IDSC_MERGEPOLICY, _("%ls - Merged %ls")),
    make_pair(IDSC_MISSINGPASSWORD, _("MISSING PASSWORD")),
    make_pair(IDSC_MISSINGPOLICYNAME, _("\tPassword policy name '%ls' is not in the database.")),
    make_pair(IDSC_MISSINGPOLICYNAMES, _("\tOne or more Password Policy Names were not found in the database. The affected entries have been changed to use the database's default policy.")),
    make_pair(IDSC_MISSINGTITLE, _("MISSING TITLE # %d")),
    make_pair(IDSC_MISSINGXSD, _("Can't find XML Schema Definition file (%ls) in your PasswordSafe Application Directory.\nPlease copy it from your installation file, or re-install PasswordSafe.")),
    make_pair(IDSC_MISSING_SCHEMA_VER, _("Can't obtain the schema version.")),
    make_pair(IDSC_MISSING_XML_VER, _("The filter XML version is missing.")),
    make_pair(IDSC_MSXMLBADCREATESCHEMA, _("Create SchemaCache60 Error 0x%08X during %ls.")),
    make_pair(IDSC_MSXMLPARSEERROR, _("SAX Parse60 Error 0x%08X during %ls.")),
    make_pair(IDSC_MSXMLSAXGENERROR, _("Error (%08X): line %d character %d %ls")),
    make_pair(IDSC_NO, _("No")),
    make_pair(IDSC_NOCONFIGLOCK, _("Unable to get configuration file lock.\n\nWill use registry.")),
    make_pair(IDSC_NOLOCKACCESS, _("Cannot create lock file - no permission in directory?")),
    make_pair(IDSC_NOMOREHANDLES, _("Internal error: Out of file handles")),
    make_pair(IDSC_NOMSXMLREADER, _("Unable to use a MS XML reader on your system.  Neither MS XML V3, V4 or V6 seems available.")),
    make_pair(IDSC_NONE, _("None")),
    make_pair(IDSC_NONSAVEDCHANGES, _("Unsaved changes")),
    make_pair(IDSC_NOTSET, _("is not set")),
    make_pair(IDSC_NUMPROCESSED, _("Number of entries processed: %d\n\nNumber of invalid UUIDs fixed: %d\n\nNumber of duplicate UUIDs fixed: %d\n\nNumber of non-unique Group/Title/User fixed: %d\n\nNumber of Password Histories fixed: %d\n\nNumber of Alias warnings issued: %d\n\nNumber of Shortcut warnings issued: %d\n\nNumber of entries with fields that cannot be fully displayed: %d.\n\nRecommend that the database is now saved.")),
    make_pair(IDSC_OR, _("Or")),
    make_pair(IDSC_PASSWORDPOOR, _("Password should be mixed case, with at least one digit or punctuation character")),
    make_pair(IDSC_PASSWORDTOOSHORT, _("Password is too short")),
    make_pair(IDSC_PEASYVISION, _("Easyvision characters")),
    make_pair(IDSC_PHEXADECIMAL, _("Hexadecimal characters")),
    make_pair(IDSC_PLENGTH, _("Password length")),
    make_pair(IDSC_PPRONOUNCEABLE, _("Pronounceable passwords")),
    make_pair(IDSC_PUSEDIGITS, _("Use digits")),
    make_pair(IDSC_PUSELOWER, _("Use lowercase characters")),
    make_pair(IDSC_PUSESYMBOL, _("Use symbols")),
    make_pair(IDSC_PUSEUPPER, _("Use uppercase characters")),
    make_pair(IDSC_PWHERROR, _("Error in a Password History %ls:")),
    make_pair(IDSC_PWHERRORTEXT, _("sub-field starting at position %d (within the History field): ")),
    make_pair(IDSC_PWHISTORYSKIPPED, _("  All Password History ignored.")),
    make_pair(IDSC_READ_ERROR, _("Read Error")),
    make_pair(IDSC_REMOVEDKBSHORTCUTS, _("\tOne or more entry keyboard shortcuts were already assigned to entries in this database. They have been removed from the %ls entries.")),
    make_pair(IDSC_RENAMEDPOLICYNAMES, _("\tOne or more Password Policy Names were already in this database but had different settings. They have been renamed.")),
    make_pair(IDSC_REPORTFILENAME, _("%ls%ls%ls_Report.txt")),
    make_pair(IDSC_REPORT_TITLE1, _("Report of %ls function started at %ls")),
    make_pair(IDSC_REPORT_TITLE2, _("on database %ls")),
    make_pair(IDSC_RPTVALIDATE, _("Validate")),
    make_pair(IDSC_SAX2ERROR, _("Error")),
    make_pair(IDSC_SAX2FATALERROR, _("Fatal Error")),
    make_pair(IDSC_SAX2WARNING, _("Warning")),
    make_pair(IDSC_SAXERRORPWH, _("\nError in Password History for entry: \"%ls\"%ls\"%ls\": ")),
    make_pair(IDSC_SEEATTACHMENTFILTERS, _("See Attachment filters")),
    make_pair(IDSC_SEEPWHISTORYFILTERS, _("See Password History filters")),
    make_pair(IDSC_SEEPWPOLICYFILTERS, _("See Password Policy filters")),
    make_pair(IDSC_SET, _("is set")),
    make_pair(IDSC_SHORTCUT, _("shortcut")),
    make_pair(IDSC_SHORTCUTS, _("shortcuts")),
    make_pair(IDSC_SPECFICSYMBOLS, _("policy specific symbols")),
    make_pair(IDSC_START_REPORT, _("Start Report")),
    make_pair(IDSC_STATAUTOTYPE, _("Double-Click on entry to Autotype")),
    make_pair(IDSC_STATBROWSE, _("Double-Click on entry to Browse to URL")),
    make_pair(IDSC_STATBROWSEPLUS, _("Double-Click on entry to Browse to URL + Autotype")),
    make_pair(IDSC_STATCOMPANY, _("https://pwsafe.org/")),
    make_pair(IDSC_STATCOPYNOTES, _("Double-Click on entry to Copy Notes")),
    make_pair(IDSC_STATCOPYPASSWORD, _("Double-Click on entry to Copy Password")),
    make_pair(IDSC_STATCOPYPASSWORDMIN, _("Double-Click on entry to Copy Password and Minimize")),
    make_pair(IDSC_STATCOPYUSERNAME, _("Double-Click on entry to Copy Username")),
    make_pair(IDSC_STATRUN, _("Double-Click on entry to Run Command")),
    make_pair(IDSC_STATSENDEMAIL, _("Double-Click on entry to Send Email")),
    make_pair(IDSC_STATVIEWEDIT, _("Double-Click on entry to View/Edit it")),
    make_pair(IDSC_SYNCHCOMPLETED, _("\nSynchronize completed: %d %ls updated")),
    make_pair(IDSC_SYNCHUPDATED, _("\nThe following %ls %ls updated:")),
    make_pair(IDSC_SYNCPOLICY, _("%ls - Sync'd %ls")),
    make_pair(IDSC_SYSTEMLOCKERROR, _("System error: No more file handles available")),
    make_pair(IDSC_UNKNOWN, _("Unknown")),
    make_pair(IDSC_UNKNOWNFIELDS, _("In Headers(%ls)/In Entries(")),
    make_pair(IDSC_UNKNOWNFUNCTION, _("Unknown function")),
    make_pair(IDSC_UNKNOWNOBJECT, _("Unknown object")),
    make_pair(IDSC_UNKNOWN_ERROR, _("Internal error: Unexpected error number")),
    make_pair(IDSC_USERONHOST, _("%ls on %ls")),
    make_pair(IDSC_VALIDATE_ATTACHMENT, _("\tName: %s; Filename: %s")),
    make_pair(IDSC_VALIDATE_BADUUID, _("The following entries had an invalid UUID field.  This has been corrected.")),
    make_pair(IDSC_VALIDATE_DEPS, _("The following entries have passwords in the correct form for %ls, but the base entry does not exist.")),
    make_pair(IDSC_VALIDATE_DUPLICATES, _("The following entries were duplicates of an existing entry.")),
    make_pair(IDSC_VALIDATE_DUPUUID, _("The following entries had a duplicate UUID field.  This has been corrected.")),
    make_pair(IDSC_VALIDATE_EMPTYPSWD, _("The following entries had an empty Password field, which is not permitted. The password has been set to '%ls'")),
    make_pair(IDSC_VALIDATE_EMPTYTITLE, _("The following entries had an empty Title field, which is not permitted.")),
    make_pair(IDSC_VALIDATE_ENTRY, _("\tGroup='%ls', Title='%ls', User='%ls' %ls")),
    make_pair(IDSC_VALIDATE_ENTRY2, _("- Its title has been changed to:'%ls'")),
    make_pair(IDSC_VALIDATE_ERRORS, _("The following ERRORS were detected and were FIXED.")),
    make_pair(IDSC_VALIDATE_MISSING_ATT, _("The following entries refer to missing attachments.")),
    make_pair(IDSC_VALIDATE_ORPHAN_ATT, _("The following attachments are not referred to by any entry.")),
    make_pair(IDSC_VALIDATE_PWH, _("The following entries had an invalid Password History.  This has been rebuilt with available data.  There may be some loss of history.")),
    make_pair(IDSC_VALIDATE_TEXT, _("The following entries have one or more text fields too long to display or edit (over %d characters).  The largest entry size found was ~%d %ls.")),
    make_pair(IDSC_VALIDATE_WARNINGS, _("The following WARNINGS were detected - you should review and fix them manually.")),
    make_pair(IDSC_WAS, _("was")),
    make_pair(IDSC_WERE, _("were")),
    make_pair(IDSC_WILLEXPIRE, _("will expire")),
    make_pair(IDSC_XERCESPARSEERROR, _("SAX Parse Error during %ls\n%ls.")),
    make_pair(IDSC_XERCESSAXGENERROR, _("XML %ls: line %d character %d: %ls")),
    make_pair(IDSC_XMLCHARACTERERRORS, _("*** Invalid XML characters found - see exported XML file for more details ***")),
    make_pair(IDSC_XMLCREATE_CFG_FAILED, _("Internal error: Couldn't initialize config file XML structure")),
    make_pair(IDSC_XMLEXP_FILTERACTIVE, _("A filter was active. Export of data was restricted to include only those displayed.")),
    make_pair(IDSC_XMLEXP_FLDRESTRICT, _("Export of data was restricted to certain fields by the user.")),
    make_pair(IDSC_XMLEXP_POLICIES, _("Note: These Password Policies will not replace existing policies with the same name in the current database.")),
    make_pair(IDSC_XMLEXP_PREFERENCES, _("Note: These preferences are only used when importing into an empty database.")),
    make_pair(IDSC_XMLEXP_SUBSETACTIVE, _("Subset of entries restricted by the following rule:")),
    make_pair(IDSC_XMLEXP_SUBSETFIELDS, _("The user specified that the following fields be excluded from the export:")),
    make_pair(IDSC_XMLFILEERROR, _("Configuration file error:\n%ls\n%ls\noffset approximately at %d")),
    make_pair(IDSC_XMLIMPORT, _("import")),
    make_pair(IDSC_XMLLOADFAILURE, _("Unable to load configuration file")),
    make_pair(IDSC_XMLLOCK_CFG_FAILED, _("Failed to lock configuration file - opened by another instance of PasswordSafe?")),
    make_pair(IDSC_XMLSAVEFAILURE, _("Unable to save configuration file")),
    make_pair(IDSC_XMLVALIDATION, _("validation")),
    make_pair(IDSC_YES, _("Yes")),
    make_pair(IDSC_YESEASYVISON, _("Yes - EasyVision Symbols: %ls")),
    make_pair(IDSC_YESNUMBER, _("Yes (at least %d)")),
    make_pair(IDSC_YESPRONOUNCEABLE, _("Yes - Pronounceable Symbols: %ls")),
    make_pair(IDSC_YESSYMBOLS, _("Yes - At least %d from %ls: %ls")),
  }; // Pairs array
} // anonymous namespace

map<int, const TCHAR *> core_st(Pairs, Pairs + sizeof(Pairs)/sizeof(Pairs[0]));

#endif
